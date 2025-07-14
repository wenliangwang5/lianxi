#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
void divide(int n)
{
	for(int i=2;i<=n/i;i++)//从前往后枚举因数（n/i的意思是仅仅枚举较小的那个因子 一个数的因子一定有一个小于 n/i  一个大于n/i）   
	{
		if(n%i==0)//若因数可以被整除 则开始计数 
		{
			int s=0;
			while(n%i==0)//循环相除 把数中的所有此因子除尽 
			{
				n/=i;//除去因子 
				s++;//因子次数加一 
			}
			printf("%d %d\n",i,s);//当不能除尽后 输出答案 
		}
	}
	if(n) printf("%d %d\n",n,1);//输出最后较大的那个因子 
}
int main()
{
  int n;
  scanf("%d",&n);
  while(n--)//多次询问 
  {
  	int x;
  	scanf("%d",&x);
  	divide(x);
  	
  }

  return 0;
}


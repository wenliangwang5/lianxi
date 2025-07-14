#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
void solve(int n)//二进制枚举的原理是 n位人 每一位置上都有选和不选的情况 一共有2的n次方
//而每一种情况都可用的二进制表示可以替换位 1- n的十进制表示 
{
	int ans=0;//答案变量 
	for(int i=0;i<(1<<n);i++) //循环判断每种二进制i情况 
	{
		bool flag=true;//标记变量 
		for(int j=0;j<n;j++)//开始枚举每种情况上的各个位置j是否符合条件 
		{
			int n1=(j+1)%n;//j+1位置 
			int n2=(j+2)%n;//j+2位置 
			
			int a=(i>>j)&1;//算出第i位 
			int b=(i>>n1)&1;//i+1位 
			int c=(i>>n2)&1;//i+2位 
			
			if(a==1)//如果第一位是1的话  判断后面是否符合情况 否则终止此方案 
			{
				if(!((c==1&&b==0)||(c==0&&b==1)))
				{
					flag=false;
					break;
				}
			}
			else //第一位不是1的话 如果后面符合情况的话 需要终止方案 
			{
				if((c==1&&b==0)||(c==0&&b==1))
				{
					flag=false;
					break;
				}
			}
		}
		
		if(flag) for(int j=0;j<n;j++) if(((i>>j)&1)==0) ans++;//方案可行的话 计算说谎者的人数 
	}
	
	cout<<ans<<"\n";//最后输出答案  观察规律 即可 
}
int main()
{
  int t;
  for(int i=1;i<=20;i++)//打表先测试1-20个村民的答案 
  {
  	solve(i);
  }

  return 0;
}



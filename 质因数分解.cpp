#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll n,x;
bool check(int p)//质数筛 判断p是否是质数 从小到大枚举 是否能除尽 枚举到n/i即可 
//因为 能除尽的因子必是一大一小 小的因子里面如果没有 大的也不用考虑 
{
	for(int i=2;i<=p/i;i++)
	{
		if(p%i==0) return false;
	}
	return true;
}
int main()
{
  cin>>n;
  for(int i=2;i<=n;i++)
  {
  	if(check(i)&&n%i==0){//从小到大找到最小的质因子 i 输出n/i即可 因为原数必是两质因子之积 
  	    x=n/i;
  	    break;
	  }
  }
  cout<<x;
  return 0;
}



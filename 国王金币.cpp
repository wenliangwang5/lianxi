#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int x;
//注意 本题采用二分算法 可能有些难度 
bool check(int m)//检查前天数之和是否比x天小 
{
	return m*(m+1)/2<=x;
}
int main()
{
  cin>>x;
  int l=1,r=10000;
  while(l<r)//二分找最接近的满足的天数 
  {
  	int mid=l+r+1>>1;
  	if(check(mid)) l=mid;//符合条件的话左端点更新 期望找到更接近的 
  	else r=mid-1;//不符合的话右端点更新 找更小的满足天数 
  	
  }
  int f=x-l*(l+1)/2;//求满足过后剩余的几天    l就是二分后的最大满足天数 
   
  ll res=0;
  for(int i=1;i<=l;i++)
  {
  	res+=i*i;//求满足天数的金币之和 
  }
  cout<<res+f*(l+1);//满足的加上剩余的 
  return 0;
}



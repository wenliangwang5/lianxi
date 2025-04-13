#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int a[N];
int sum,sum1;//分别求左侧之和和总和 
int main()
{
  cin>>n;//数组长度 
  for(int i=0;i<n;i++)
  {
  	 cin>>a[i];
  	 sum+=a[i];//总和求得 
  }
  int res=-1;
  
  for(int i=0;i<n;i++)
  {
  	if(sum1==(sum-a[i]-sum1))//每次先判断左右侧之和是否相等 相等的话 更新答案 首次得出答案即跳出循环  保证最小 
  	{
  		res=i;
  		break;
	  }
	  sum1+=a[i];//更新左侧和 
  }
  cout<<res;
  return 0;
}



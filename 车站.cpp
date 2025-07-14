#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int x,n,s,z,ans;
int a[N],sum[N];
int main()
{
  cin>>x>>n>>s>>z;
  ans=x;
  if(z>=3) ans+=x;//小于3时仅有初始值 大于等于三时有2a值 
  
  if(z>=4) {//从第四位开始值开始变化 
  	a[1]=a[2]=1;
  	for(int i=3;i<=n-4;i++)
  	{
  		a[i]=a[i-1]+a[i-2];
	  }
	  
	  for(int i=1;i<=n-4;i++)
	  {
	  	sum[i]=sum[i-1]+a[i];
	  }
	  
	  int y=(s-ans-sum[n-5]*x)/sum[n-4];
	  ans+=sum[z-4]*x+sum[z-3]*y;
	   
	   }
    cout<<ans;
  return 0;
}



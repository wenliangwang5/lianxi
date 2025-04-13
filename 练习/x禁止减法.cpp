#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,na,nb;
ll a[N],b[N],s[N],m[N];
ll mod1=1000000007;
int main()
{
  cin>>n>>na;
  ll res=1,ans=0;
  for(int i=na;i>=1;i--) cin>>a[i];
  cin>>nb;
  for(int i=nb;i>=1;i--) cin>>b[i];
  for(int i=1;i<=na;i++)
  {
	ll x=max(a[i],b[i])+1;
	if(x<2)
	{
		s[i]=2;
	 } 
	 else s[i]=x; 
  	
   } 
   for(int i=1;i<=na;i++) 
   {
   	m[i]=a[i]-b[i];
   }
   
   for(int i=1;i<=na;i++)
   {
	ans=(ans+(res*m[i]))%mod1; 
	res=(res*s[i])%mod1;
   }
   
   cout<<ans%mod1;
  return 0;
}



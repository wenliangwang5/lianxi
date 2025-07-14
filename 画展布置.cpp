#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
ll a[N];
ll s[N]; 
ll ans=1e15;
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++) cin>>a[i];
  
  sort(a+1,a+1+n);
  
  for(int i=2;i<=n;i++)
  {
  	s[i]=s[i-1]+abs(a[i]*a[i]-a[i-1]*a[i-1]);
  	
  }
  for(int i=m;i<=n;i++)
  {
  	ans=min(ans,s[i]-s[i-m+1]);
  }
  cout<<ans;
  return 0;
}



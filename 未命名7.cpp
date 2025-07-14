#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
ll a[N],ans; 
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) 
  {
  	cin>>a[i];
   } 
  for(int i=1;i<=n;i++)
  {
  	for(int j=i+1;j<=n;j++)
  	{
  		ll t=a[i]^a[j];
  		ans=max(ans,t);
	  }
  }
  cout<<ans;
  return 0;
}



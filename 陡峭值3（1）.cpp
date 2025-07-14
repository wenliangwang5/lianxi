#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
#define int long long;
string s,c;
int n,m;
int ans;
int main()
{
  cin>>n>>m;
  cin>>s;
  
  for(int i=0;i<=n-m;i++)
  {
  	int t=0;
  	for(int j=i;j<i+m-1;j++)
  	{
  	  t+=abs(s[j]-s[j+1]);
	  }
  	 ans+=t;
  }
  int ans1=0;
  for(int i=0;i<n-1;i++)
  {
  	ans1+=abs(s[i]-s[i+1]);
  }
 cout<<ans;
  return 0;
}



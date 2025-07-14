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
const int N=200010,M=1010,mod1=1e9+7;
int n;
int f[N];

int main()
{
  cin>>n;
  f[0]=1;
  for(int i=1;i<=n;i++)
  {
  	for(int j=i;j<=n;j++)
  	{
  		f[j]=(f[j]+f[j-i])%mod1;
	  }
  }
  cout<<f[n];
  return 0;
}



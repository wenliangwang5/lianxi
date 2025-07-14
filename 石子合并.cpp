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
const int N=310,M=310;
int n;
int a[N],s[N];
int f[N][N];
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i],s[i]=s[i-1]+a[i];
  
  for(int len=2;len<=n;len++)
  {
  	for(int i=1;i+len-1<=n;i++)
  	{
  		int j=i+len-1;
  		f[i][j]=1e8;
  		for(int k=i;k<j;k++)
  		{
  			f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]+s[j]-s[i-1]);
		  }
	  }
  }
  cout<<f[1][n];
  return 0;
}



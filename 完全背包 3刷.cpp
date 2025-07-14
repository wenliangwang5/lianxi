#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int v[N],w[N];
int f[M][M];
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++) cin>>v[i]>>w[i];
  
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		f[i][j]=f[i-1][j];
  		if(j>=v[i])
  		{
  			f[i][j]=max(f[i][j],f[i][j-v[i]]+w[i]);
  			
		  }
  		
	  }
  }
cout<<f[n][m];
  return 0;
}



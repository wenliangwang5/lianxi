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

void solv()
{
	int n,m;
	cin>>n>>m;
    bool f=0;
    
	if(n>m) {
  	swap(n,m);
  	f=1;
  }
  vector<vector<int>> g(n+1,vector<int>(m+1));
  for(int i=1;i<=n;i++)
  {
  	g[i][i]=i;
  }
  for(int j=n+1;j<m;j++)
  {
  	g[n][j]=j;
  }
  int t=m;

  for(int i=1;i<n;i++)
  {
  	g[i][m]=(m+i)^i;
  	m^=g[i][m];
  }
  g[n][m]=t;
  int xr=0;
  for(int i=1;i<=m;i++)
  {
  	xr^=g[n][i];
  }
  if(xr!=n+m) cout<<-1<<endl;
  else {
  	if(f==0)
   {
  	for(int i=1;i<=n;i++)
  	{
  		for(int j=1;j<=m;j++)
  		{
  			cout<<g[i][j]<<"\n"[j==m];
		  }
	  }
    }
    else {
    	for(int i=1;i<=m;i++)
  	  {
  		for(int j=1;j<=n;j++)
  		{
  			cout<<g[j][i]<<"\n"[j==n];
		  }
	  }
    }
	}
  }

int main()
{

  solv();
  return 0;
}



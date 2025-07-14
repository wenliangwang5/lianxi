#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m,ans;
int a[M][M],st[M][M];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int dp(int x,int y)
{
	if(st[x][y]!=0) return st[x][y];
	
	st[x][y]=1;
	for(int i=0;i<4;i++)
	{
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&a[tx][ty]<a[x][y])
		{
			st[x][y]=max(st[x][y],dp(tx,ty)+1);
		}
		
	}
	return st[x][y];
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  	   cin>>a[i][j];	
	}
  }
  
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=m;j++)
  	{
  		ans=max(ans,dp(i,j));
	  }
  }
  cout<<ans;
  return 0;
}



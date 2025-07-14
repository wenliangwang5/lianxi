#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int a[M][M],b[M][M];
int dx[]={-1,1,0,0,-1,1,1,-1};
int dy[]={0,0,-1,1,1,1,-1,-1};
void solve(int x,int y)
{
	int c=0;
	for(int i=0;i<8;i++)
	{
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(tx>=1&&tx<=n&&ty>=1&&ty<=m)
		{
			if(a[tx][ty]==1) c++;
		}
	}
	b[x][y]=c;
	
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
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  	  if(a[i][j]==0)
		{
			solve(i,j);
		}else{
			b[i][j]=9;
		}	
	  }
  }
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		cout<<b[i][j]<<" ";
	  }
	  cout<<endl;
  }
  return 0;
}



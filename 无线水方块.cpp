#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=110;
int n,m,x,y,a,b,tim;
int g[N][N],st[N][N];
queue<pair<int,int>> p;
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
void solve()
{
	memset(st,-1,sizeof st);
	st[x][y]=0;
	p.push({x,y});
	
	while(p.size())
	{   
	 auto k=p.front();
		p.pop();
		for(int i=0;i<4;i++)
		{
			int tx=k.first+dx[i];
			int ty=k.second+dy[i];
			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&st[tx][ty]==-1&&g[k.first][k.second]<=g[tx][ty])
			{
				st[tx][ty]=st[k.first][k.second]+1;
				p.push({tx,ty});
			}	
		}
	}
	
    cout<<st[a][b];
	
}
int main()
{
  cin>>n>>m>>x>>y>>a>>b;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	     cin>>g[i][j];
  }
  solve();
  return 0;
}


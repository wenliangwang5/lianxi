#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,k;
int a[M][M],v[M][M],dis[M][M];
int ans=0x3f3f3f3f;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
void dfs(int x,int y,int cost,int flag)
{
	if(x==n&&y==n)
	{
		ans=min(ans,cost);
		return ;
	}
	if(cost>=ans) return ;
	if(cost>=dis[x][y]) return ;
	dis[x][y]=cost;
	for(int i=0;i<4;i++)
	{
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&!v[tx][ty])
		{
	         v[tx][ty]=1;		
			if(a[tx][ty]==-1&&flag==0)
			{
				a[tx][ty]=a[x][y];
				dfs(tx,ty,cost+2,1);
				a[tx][ty]=-1;
			}
			else if(a[tx][ty]!=-1)
			{
				dfs(tx,ty,cost+(a[tx][ty]!=a[x][y]),0);	
			}
			v[tx][ty]=0;
		 } 
	}
	
}
int main()
{
   cin>>n>>k;
   memset(a,-1,sizeof a);
   memset(dis,0x3f,sizeof dis);
  for(int i=1;i<=k;i++)
  {
  	int x,y,s;
  	cin>>x>>y>>s;
  	a[x][y]=s;
  }
  v[1][1]=1;
  dfs(1,1,0,0);
  if(ans==0x3f3f3f3f) cout<<-1;
  else cout<<ans;
  return 0;
}



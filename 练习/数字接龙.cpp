#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=10,M=1010;
int n,k;
int g[N][N];
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
string path;
bool st[N][N];
bool edge[N][N][N][N];
bool dfs(int a,int b)
{
	if(a==n-1&&b==n-1)
	{
		return path.size()==n*n-1;
	}
	st[a][b]=true;
	for(int i=0;i<=7;i++)
	{
		int x=a+dx[i];
		int y=b+dy[i];
		if(x<0||x>n-1||y<0||y>n-1||st[x][y]) continue;
		if((g[a][b]+1)%k!=g[x][y]) continue;
		if(i%2&&(edge[a][y][x][b]||edge[x][b][a][y])) continue;
		edge[a][b][x][y]=true;
		path+='0'+i;
	    if(dfs(x,y)) return true;
		path.pop_back();
		edge[a][b][x][y]=false;
	}
	st[a][b]=false;
	return false;
}

int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>g[i][j];
		}
	}
if(!dfs(0,0)) cout<<-1<<endl;
else cout<<path<<endl;

  return 0;
}



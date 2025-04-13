#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m,ans;
int b[M][M];
int x[N];
int st[N];
unordered_map<string,int> p;
bool check()
{
	if(b[x[n]][x[1]]) return false;
	else return true;
}
void dfs(int u)
{
	if(u==n+1) {
		if(check())
		{
			ans++;
		    return ;
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(st[i]) continue;
		
		if(x[u-1]==0||!b[x[u-1]][i]){
		st[i]=1;
		x[u]=i;
		dfs(u+1);
		st[i]=0;
		x[u]=0;	
		}
		
	  }  
	
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=m;i++)
  {
  	int x,y;
  	cin>>x>>y;
  	b[x][y]=1;
  	b[y][x]=1;
  }
  x[1]=1;
  st[1]=1;
  dfs(2);
  cout<<ans;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
const int inf=0x3f3f3f3f;
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int n,m;
int g[M][M];
int dist[N];
bool st[N];
int prim()
{
	memset(dist,0x3f,sizeof dist);
	int res=0;
	for(int i=0;i<n;i++)
	{
		int t=-1;
		for(int j=1;j<=n;j++)
		{
			if(!st[j]&&(t==-1||dist[t]>dist[j])){
				
				t=j;
			}
		}
		
		if(i&&dist[t]==inf) return inf;
		if(i) res+=dist[t];
		for(int j=1;j<=n;j++) dist[j]=min(dist[j],g[t][j]);
		st[t]=true;
	}
	return res;
}
int main()
{
  cin>>n>>m;
  memset(g,0x3f,sizeof g);
  while(m--)
  {
  	int a,b,c;
  	cin>>a>>b>>c;
  	g[a][b]=g[b][a]=min(g[a][b],c);
  }
  int t=prim();
  if(t==inf) cout<<"impossible";
  else cout<<t<<endl;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=510,M=1010;
int n,m;
int g[N][N];
int dist[N];
bool st[N];
priority_queue<PII,vector<PII>,greater<PII>> h;
int dijkstra()
{
	memset(dist,0x3f,sizeof dist);
	dist[1]=0;
	h.push({0,1});
	while(h.size())
	{
		auto t=h.top();
		h.pop();
		int nod=t.second;
		if(st[nod]) continue;
		st[nod]=true;
		for(int j=1;j<=n;j++)
		{
		 	if(dist[j]>dist[nod]+g[nod][j]) 
		 	{
		 		dist[j]=dist[nod]+g[nod][j];
		 		h.push({dist[j],j});
			 }
		}
		
	}
	
	if(dist[n]==0x3f3f3f3f) return -1;
	else return dist[n];
	
}
int main() 
{
  cin>>n>>m;
  memset(g,0x3f,sizeof g);
  while(m--)
  {
  	int a,b,w;
  	cin>>a>>b>>w;
  	g[a][b]=min(g[a][b],w);
  }
  int t=dijkstra();
  cout<<t<<endl;
  return 0;
}



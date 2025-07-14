#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=510,M=10010;
int n,m,k;
int dist[N],backup[N];
struct{
	int a,b,w;
	
}edges[M];
void bellman_ford()
{
	memset(dist,0x3f,sizeof dist);
	dist[1]=0;
	for(int i=1;i<=k;i++)
	{
		memcpy(backup,dist,sizeof dist);
		for(int j=1;j<=m;j++)
		{
			int a=edges[j].a,b=edges[j].b,w=edges[j].w;
			dist[b]=min(dist[b],backup[a]+w);
		}
	}
	
	if(dist[n]>0x3f3f3f3f/2) cout<<"impossible"<<endl;
	else cout<<dist[n];
	
}
int main()
{
  cin>>n>>m>>k;
  for(int i=1;i<=m;i++)
  {
  	int a,b,w;
  	cin>>a>>b>>w;
  	edges[i]={a,b,w};
  }
  bellman_ford(); 
  return 0;
}



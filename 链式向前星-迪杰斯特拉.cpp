#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int n,m;
int h[N],e[N],w[N],ne[N],idx;
int dist[N];
bool st[N];
priority_queue<PII,vector<PII>,greater<PII>> h1;
void add(int a,int b,int c)
{
	e[idx]=b,ne[idx]=h[a],w[idx]=c,h[a]=idx++;
}
int dijkstra()
{
	memset(dist,0x3f,sizeof dist);
	dist[1]=0;
	h1.push({0,1});
	while(h1.size())
	{
		auto t=h1.top();
		h1.pop();
		int nod=t.second;
		if(st[nod]) continue;
		st[nod]=true;
		for(int i=h[nod];i!=-1;i=ne[i])
		{
			int j=e[i];
			if(dist[j]>dist[nod]+w[i])
			{
				dist[j]=dist[nod]+w[i];
				h1.push({dist[j],j});
			}
			
		}
	}
	
	if(dist[n]==0x3f3f3f3f) return -1;
	else return dist[n];
	
}
int main() 
{
  cin>>n>>m;
  memset(h,-1,sizeof h);
  while(m--)
  {
  	int a,b,c;
  	cin>>a>>b>>c;
  	add(a,b,c); 
  }
  int t=dijkstra();
  cout<<t<<endl;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int h[N],w[N],e[N],ne[N],idx;
int dist[N];
bool st[N];
void add(int a,int b,int c)
{
	e[idx]=b,ne[idx]=h[a],w[idx]=c,h[a]=idx++; 
 } 
 
int spfa()
{
	memset(dist,0x3f,sizeof dist);
	dist[1]=0;
	queue<int> q;
	q.push(1);
	st[1]=true;
	while(q.size())
	{
		auto t=q.front();
		q.pop();
		st[t]=false;
		for(int i=h[t];i!=-1;i=ne[i])
		{
			int j=e[i];
			if(dist[j]>dist[t]+w[i])
			{ 
				dist[j]=dist[t]+w[i];
				if(!st[j])
				{
					q.push(j);
					st[j]=true;
				}
			}	
		}
	}
	if(dist[n]==0x3f3f3f3f) return -131;
	return dist[n];
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
  int t=spfa();
  if(t==-131) cout<<"impossible"<<endl;
  else cout<<t<<endl;
  return 0;
}



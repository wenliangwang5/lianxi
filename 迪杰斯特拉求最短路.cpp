#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int h[N],e[N],en[N],w[N],idx;
int st[N],d[N];
int  n,m;
priority_queue<PII,vector<PII>,greater<PII>> h1;
void add(int a,int b,int c)
{
	e[idx]=b,en[idx]=h[a],w[idx]=c,h[a]=idx++;
}
int dijkstra()
{
	memset(d,0x3f,sizeof d);
	d[1]=0;
	h1.push({0,1});
	while(h1.size())
	{
		auto t=h1.top();
		h1.pop();
		int no=t.second;
	
		for(int i=h[no];i!=-1;i=en[i])
		{
			int j=e[i];
			if(d[j]>d[no]+w[i]) {
				d[j]=d[no]+w[i];
				h1.push({d[j],j});
			}
			
		}
		
	}
	if(d[n]==0x3f3f3f3f) return -1;
	else return d[n];
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



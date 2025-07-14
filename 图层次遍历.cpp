#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int e[N],ne[N],h[N],idx;
int d[N];
int q[N],hh,tt;
void add(int a,int b)
{
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
int bfs()
{
	q[0]=1;
	memset(d,-1,sizeof d);
	d[1]=0;
	while(hh<=tt)
	{
		int x=q[hh++];
		for(int i=h[x];i!=-1;i=ne[i])
		{
			int j=e[i];
			if(d[j]==-1){
				d[j]=d[x]+1;
				q[++tt]=j;
			}
			
		}
		
		
	}
	
	return d[n];
}
int main()
{
   cin>>n>>m;
   memset(h,-1,sizeof h);
   for(int i=1;i<=m;i++) {
   	int a,b;
   	cin>>a>>b;
   	add(a,b);
   }
  cout<<bfs()<<endl;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=6010,M=1010;
int n;
int happ[N];
int h[N],e[N],ne[N],idx;
int f[N][2];
int fa[N];
void add(int a,int b)
{
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
void dfs(int u){
	
	f[u][1]=happ[u];
	
	for(int i=h[u];i!=-1;i=ne[i]){
		
		int j=e[i];
		dfs(j);
		f[u][0]+=max(f[j][0],f[j][1]);
		
		f[u][1]+=f[j][0];
	}
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>happ[i];
  }
  memset(h,-1,sizeof h);
  for(int i=1;i<n;i++)
  {
  	int a,b;
  	cin>>a>>b;
  	fa[a]=1;
  	add(b,a);
  }
  int r=1;
  while(fa[r]) r++;
  
  dfs(r);
  cout<<max(f[r][0],f[r][1]);
  return 0;
}



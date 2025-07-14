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
const int N=200010,M=1010;
int n,m;
int h[N],e[N],en[N],idx;
int color[N];
bool flag=true;
void add(int a,int b){
	e[idx]=b,en[idx]=h[a],h[a]=idx++;
	
}
bool dfs(int u,int t){
	color[u]=t;
	for(int i=h[u];i!=-1;i=en[i]){
		int j=e[i];
		if(!color[j])
		{
			if(!dfs(j,2-t)) return false;
		}
		else {
			if(color[j]==color[u]) return false;
		}
	}
	return true;
}
int main()
{
  cin>>n>>m;
  memset(h,-1,sizeof h);
  while(m--)
  {
  	int a,b;
  	cin>>a>>b;
  	add(a,b),add(b,a);
   } 
  for(int i=1;i<=n;i++)
  {
  	if(!color[i])
  	{
  		if(!dfs(i,0))
  		{
  			flag=false;
  			break;
		  }
	  }
  }
  if(flag) puts("Yes");
  else puts("No");
  return 0;
}



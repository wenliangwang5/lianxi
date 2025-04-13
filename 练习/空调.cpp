#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m1,ans=1e9,tem;
struct kt{
	int a,b,p,m;
	
}o[N];
int x[N];
int c[N];
bool check(int* c)
{
	for(int i=1;i<=100;i++)
	{
		if(c[i]<x[i]) return false;
	}
	return true;
}
void dfs(int u,int* c)
{
	
	if(u==m1+1)
	{
		if(check(c)) ans=min(ans,tem);
		 return ;
	}
    

	
    for(int i=0;i<=1;i++)
    {
    	if(i==0) {
    		dfs(u+1,c);
		}
		else {
			tem+=o[u].m;
			for(int j=o[u].a;j<=o[u].b;j++) c[j]+=o[u].p;
			dfs(u+1,c);
			for(int j=o[u].a;j<=o[u].b;j++) c[j]-=o[u].p;
			tem-=o[u].m;
		}
	}
	
}

int main()
{
   cin>>n>>m1;
   for(int i=1;i<=n;i++)
   {
   	int s,t,c;
   	cin>>s>>t>>c;
   	for(int j=s;j<=t;j++)
   	{
   		x[j]+=c;
	   }
   }
   for(int i=1;i<=m1;i++)
   {
   	int a,b,p,m;
   	cin>>a>>b>>p>>m;
   	o[i]={a,b,p,m};
   }
   
   dfs(1,c);
   cout<<ans;
  return 0;
}



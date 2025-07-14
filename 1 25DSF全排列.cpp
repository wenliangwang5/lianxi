#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=100010;

int  n;
int path[N];
bool st[N];
void dfs(int u){
	
	if(u==n)
	{
		for(int i=0;i<n;i++) printf("%d ",path[i]);
		puts("");
		return ;
		
	}
	
	
	for(int i=1;i<=n;i++)
	{
		if(!st[i])
		{
			path[u]=i;
			st[i]=true;
			dfs(u+1);
			st[i]=false;
			
		}
	}
}
int main()
{
	
	cin>>n;
	dfs(0);
    return 0;
}


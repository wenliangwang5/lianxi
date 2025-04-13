#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int a[N],pa[N];
int st[N];
int n;
void dfs(int x)
{
	if(x==n) 
	{
		for(int i=0;i<n;i++) cout<<pa[i]<<" ";
		
		cout<<'\n';
		
		return ;
	}
	
	for(int i=0;i<n;i++)
	{
		if(!st[i])
		{
			pa[x]=a[i];
			st[i]=1;
			dfs(x+1);
			st[i]=0;
		}
		
	}
}
int main()
{

  cin>>n;
  for(int i=0;i<n;i++)
  {
  	a[i]=i;
  }
  dfs(0);
  return 0;
}



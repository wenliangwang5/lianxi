#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=10;
int n;
char m[M][M]; 
int col[N],dg[N],udg[N];
void dfs(int x)
{
	if(x==n) 
	{
		for(int i=0;i<n;i++) cout<<m[i]<<'\n';
		
		cout<<'\n';
		return ; 
	}
	for(int i=0;i<n;i++)
	{
		if(!col[i]&&!dg[x-i+n]&&!udg[x+i])
		{
			m[x][i]='Q';
			col[i]=dg[x-i+n]=udg[x+i]=1;
			dfs(x+1);
			m[x][i]='.';
			col[i]=dg[x-i+n]=udg[x+i]=0;
			
		}
		
		
	}
}
int main()
{  
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<n;j++)
	  {
	  	m[i][j]='.';
	   } 
  }
  
  dfs(0);
  return 0;
}



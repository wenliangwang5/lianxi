#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=310;
int r,c;
ll st[M][M],h[M][M];
ll res;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
ll dp(int x,int y)
{
   	if(st[x][y]!=-1) return st[x][y];
   	
   	st[x][y]=1;
   	
   	for(int i=0;i<4;i++)
   	{
   		int a=x+dx[i],b=y+dy[i];
   		if(a>=1&&a<=r&&b>=1&&b<=c&&h[a][b]>h[x][y])
   		{
   			st[x][y]=max(st[x][y],dp(a,b)+1);
		   }
	   }
	return st[x][y];
 } 

int main()
{
  cin>>r>>c;
  memset(st,-1,sizeof st);
  for(int i=1;i<=r;i++)
  {
  	for(int j=1;j<=c;j++)
  	{
  		cin>>h[i][j];
	  }
  }
  for(int i=1;i<=r;i++)
  {
  	for(int j=1;j<=c;j++)
  	{
  	res=max(res,dp(i,j));	
	  }
  }
  
  cout<<res;
  return 0;
}



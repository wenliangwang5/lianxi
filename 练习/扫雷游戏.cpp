#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
char a[M][M];
int  b[M][M];
queue<PII> x;
int dx[]={-1,1,0,0,-1,1,1,-1};
int dy[]={0,0,-1,1,1,1,-1,-1};
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		cin>>a[i][j];
  		if(a[i][j]=='*') x.push({i,j});
	  }
  }
  while(x.size())
  {
  	auto c=x.front();
  	x.pop();
  	for(int i=0;i<8;i++)
  	{
  		int tx=c.first+dx[i];
  		int ty=c.second+dy[i];
  		if(a[tx][ty]!='*') b[tx][ty]++;
	  }
  }
  
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		if(a[i][j]=='*') cout<<'*';
  		if(a[i][j]=='?') cout<<b[i][j];
	  }
	  cout<<endl;
  }
  return 0;
}



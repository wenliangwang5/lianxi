#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1010;
int n,m;
int x[N][N];
int a[N*N],b[N*N];
int st1[N][N],st2[N][N];
void solve()
{
	int x1=1,y1=1;
	int dx[]={0,1,0,-1};
	int dy[]={1,0,-1,0};
	int dx1[]={1,0,-1,0};
	int dy1[]={0,1,0,-1};
	int cnt=0,idx=0;
	while(cnt<=n*m)
	{
		st1[x1][y1]=1;
		a[++cnt]=x[x1][y1];
		int nextx=x1+dx[idx];
		int nexty=y1+dy[idx];
		if(nextx<1||nextx>n||nexty<1||nexty>m||st1[nextx][nexty])
		{
			idx=(idx+1)%4;
			nextx=x1+dx[idx];
			nexty=y1+dy[idx];
		}
		
		x1=nextx;
		y1=nexty;
	}
	cnt=0,idx=0;
	x1=1,y1=1;
	while(cnt<=n*m)
	{
		st2[x1][y1]=1;
		b[++cnt]=x[x1][y1];
		int nextx=x1+dx1[idx];
		int nexty=y1+dy1[idx];
		if(nextx<1||nextx>n||nexty<1||nexty>m||st2[nextx][nexty])
		{
			idx=(idx+1)%4;
			nextx=x1+dx1[idx];
			nexty=y1+dy1[idx];
		}
		
		x1=nextx;
		y1=nexty;
	}
	for(int i=1;i<=n*m;i++)
	{
		if(a[i]==b[i]) cout<<a[i]<<" ";
	}
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		   cin>>x[i][j];
	}
  solve();
  return 0;
}


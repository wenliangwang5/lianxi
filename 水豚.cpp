#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
char a[M][M];
int st[M][M];
queue<PII> x;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
int f1=0,f=0;
int n,m; 
void solve()
{
	int p,q;
	while(x.size()){
		auto t=x.front();
		x.pop();
		for(int i=0;i<=7;i++)
		{
			int tx=t.first+dx[i];
			int ty=t.second+dy[i];
			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&st[tx][ty]==1) 
			{
				st[tx][ty]=-3;
			}
			
		}
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		if(st[i][j]==1) p=i,q=j; 
	}
	
	for(int i=0;i<=7;i++)
	{
		int tx=p+dx[i];
		int ty=q+dy[i];
	    if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&st[tx][ty]==0) 
			{
				int flag=1;
				for(int i=0;i<=7;i++)
				{
					int tx1=tx+dx[i];
					int ty1=ty+dy[i];
					if(tx1>=1&&tx1<=n&&ty1>=1&&ty1<=m&&st[tx1][ty1]==-1) flag=0;  
				}
				if(flag) {
					cout<<tx<<" "<<ty<<endl;
					f1=1;
				}
			}
	}
}
int main()
{
   cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		cin>>a[i][j];
  		if(a[i][j]=='w') st[i][j]=1;
  		if(a[i][j]=='c') {
  			st[i][j]=-1;
  			f=1;
		  }
  		if(a[i][j]=='m') {
  			x.push({i,j});
  			st[i][j]=-2;
		  }
	  }
  }
 solve();
 if(!f||!f1) cout<<"Too cold!"<<endl;
  
  return 0;
}



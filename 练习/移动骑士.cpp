#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=310;
int n,m;
int dis;
int a,b,x,y;
int st[M][M];
int px[]={-2,-1,1,2,2,1,-1,-2};
int py[]={1,2,2,1,-1,-2,-2,-1};
queue<PII> q;
void solve()
{
	if(a==x&&b==y) {
		return ;
	}
	st[a][b]=0;
  	q.push({a,b});
	while(q.size())
	{
		auto t=q.front();
		dis=st[t.first][t.second];
		if(t.first==x&&t.second==y)
		{
			while(q.size()) q.pop();
			return ;
		}
		q.pop();
		for(int i=0;i<=7;i++)
		{
			int tx=t.first+px[i];
			int ty=t.second+py[i];
			if(tx>=0&&tx<m&&ty>=0&&ty<m&&!st[tx][ty])
			{
				q.push({tx,ty});
				st[tx][ty]=dis+1;
			}
			
		}
		
	 } 
	
}
int main()
{
  cin>>n;
  while(n--)
  {
  	memset(st,0,sizeof st);
  	cin>>m;
  	cin>>a>>b;
  	cin>>x>>y;
  	solve();
  	cout<<st[x][y]<<endl; 
  }

  return 0;
}



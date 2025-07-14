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
char a[M][M];
vector<char> b;
bool flag=false;
int dx[2]={0,1};
int dy[2]={1,0};
void dfs(int x,int y)
{
   if(flag) return ;
   
   if(a[x][y]=='#') return ;	
   if(x==n&&y==m){
    flag=true;
    for(int i=0;i<b.size();i++) cout<<b[i];
   	return ;
   }	
   for(int i=0;i<=1;i++)
   {
   	  int tx=x+dx[i];
   	  int ty=y+dy[i];
   	  if(tx>=1&&tx<=n&&ty>=1&&ty<=m)
   	  {
   	      if(i==0) b.push_back('D');
			  else b.push_back('S');
			 dfs(tx,ty);
			 b.pop_back(); 	
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
	 }
  }
  
  dfs(1,1);
  return 0;
}



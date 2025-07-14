#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<cstring>
#include<cmath>
#include<stack>
#include<string>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define endl '\n'
#define deb(x) cout<<"#"<<x<<" "
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef pair<int,int> PII;
const int N=200010,M=1010,nod=1e9+7;
int n,m;
char g[M][M];
int st[M][M];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
vector<PII> res;
signed main()
{
 cin>>n>>m;
 for(int i=1;i<=n;i++)//原始输入 
 {
 	for(int j=1;j<=m;j++)
 	{
 	  cin>>g[i][j];
 	  if(g[i][j]=='w') st[i][j]=1;
 	  else if(g[i][j]=='m') st[i][j]=3;
 	  else if(g[i][j]=='c') st[i][j]=9;
 	  
	 }
 }
  for(int i=1;i<=n;i++)//正常水豚标记和不可选中区域标记 
  {
  	for(int j=1;j<=m;j++)
  	{
  		if(st[i][j]==3){

  			for(int k=0;k<8;k++)
  			{
  				int tx=i+dx[k];
  				int ty=j+dy[k];
  				if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&st[tx][ty]==1){

  					st[tx][ty]=2;//正常水豚标记 
				  }
			  }

		  }
		  if(st[i][j]==9){
		  	for(int k=0;k<8;k++)
  			{
  				int tx=i+dx[k];
  				int ty=j+dy[k];
  				if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&st[tx][ty]==0){

  					st[tx][ty]=2;//不可选中标记 
				  }
			  }
		  }
	  }
  }
 
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		if(st[i][j]==1){//不正常水豚周围计算 
  			//cout<<i<<" "<<j;
  			for(int k=0;k<8;k++)
  			{
  				int tx=i+dx[k];
  				int ty=j+dy[k];
  				if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&st[tx][ty]==0){
  					res.push_back({tx,ty});
				  }
			  }
		  }
	  }
  }
  if(!res.size()) cout<<"Too cold!"<<endl;//输出答案 
  else {
  	for(auto x:res){
  		cout<<x.first<<" "<<x.second<<endl;
	  }
  }
  return 0;
}



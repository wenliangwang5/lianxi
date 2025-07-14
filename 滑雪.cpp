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
int f[M][M];
int t[M][M];
int ans=0;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int dfs(int x,int y){
	int res=0;
	for(int i=0;i<4;i++)
	{
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&f[tx][ty]<f[x][y]){
			int p;
			if(t[tx][ty]>0){
			   p=t[tx][ty];	
			}
			else {
			 p=dfs(tx,ty);
			 
			}
	        res=max(res,p);
		}
	}
	res+=1;
	t[x][y]=res;
	ans=max(ans,res);
	return res;
}
signed main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=m;j++)
  	{
  		cin>>f[i][j];
	  }
  } 
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++){
  		
  		dfs(i,j);
	  }
  }
  cout<<ans<<endl;
  return 0;
}



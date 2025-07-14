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
int g[M][M];
int d[N]; 
bool st[N];
void prim(){
	int res=0;
    for(int i=0;i<n;i++){
    	int t=-1;
    	for(int j=1;j<=n;j++)
	{
		if(!st[j]&&(t==-1||d[j]<d[t])) t=j;//每次找和连通块最近的点 
	}
	
	if(i&&d[t]==inf) {//判断点是否合法 
		cout<<"impossible"<<endl;
		return ;
	}
	if(i) res+=d[t];//加上距离 
	for(int j=1;j<=n;j++) d[j]=min(d[j],g[t][j]);//合法的点用来更新其他的点和连通块的距离 
	st[t]=true;//标记一下是联通块中的 不可访问 
	}
	cout<<res<<endl;
}
signed main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=n;j++)
  	{
  		if(i==j) g[i][j]=0;
  		else g[i][j]=inf;
	  }
  }
  memset(d,0x3f,sizeof d);
  for(int i=1;i<=m;i++)
  {
  	int a,b,c;
  	cin>>a>>b>>c;
  	g[a][b]=g[b][a]=min(g[a][b],c);//最小生成树是无向图  
  }
  prim();
  return 0;
}



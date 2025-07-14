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
const int N=510,M=1010,nod=1e9+7;
int g[N][N];
int n,m;
int st[N];
int d[N];
int dijkstra(){//局部最优从而全局最优 只适用于正权边 
	d[1]=0;
   for(int o=1;o<=n;o++)
   {
   	int t=-1;
	for(int i=1;i<=n;i++)
	{
		if(!st[i]&&(t==-1||d[i]<d[t])) t=i;//每次选择权重最下小的点 
	}
	st[t]=1;
	//deb(d[t]);
	for(int i=1;i<=n;i++)
	{
		d[i]=min(d[i],d[t]+g[t][i]);//这一步更新会导致正自环更新失败 直接无视 
	}
	
   }
	if(d[n]>0x3f3f3f3f/2) return -1;
	else return d[n];
}
signed main()
{
  cin>>n>>m;
  memset(d,0x3f,sizeof d);//距离数组和邻接矩阵初始化 
  memset(g,0x3f,sizeof g);
  for(int i=1;i<=m;i++)//输入边 并且判断重边 
  {
  	int a,b,x;
  	cin>>a>>b>>x;
  	g[a][b]=min(g[a][b],x);
  }
  cout<<dijkstra()<<endl;
  return 0;
}



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
const int N=110,M=1010,nod=1e9+7;
int n,m;
int g[N][N];
int d[N][N];
PII q[N*N];//模拟队列 
int bfs()
{
	int hh=0,tt=0;// 队头队尾 
	q[0]={0,0};//源节点入队列 
	memset(d,-1,sizeof d);//访问标记位数组 
	d[0][0]=0;//距离初始化 
	int dx[4]={-1,1,0,0};//方向偏移量设置 
	int dy[4]={0,0,-1,1};
	while(hh<=tt)//一层层进行广度搜索 
	{
		auto t=q[hh++];
		for(int i=0;i<4;i++)
		{
			int x=t.first+dx[i];
			int y=t.second+dy[i];//各方向偏移位置计算 
			if(x>=0&&x<n&&y>=0&&y<m&&g[x][y]==0&&d[x][y]==-1){//判断是否合法 
				d[x][y]=d[t.first][t.second]+1;//合法距离加一 
				q[++tt]={x,y};//入队列 
			}
		}
	}
	
	return d[n-1][m-1];//返回最后结果 
}//广度优先搜索保证第一次搜到的结果是最短的 强调解的最短 深度优先搜索 搜索到的是合法结果 强调解的数量 
signed main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++)//地图输入 
  {
  	for(int j=0;j<m;j++)
  	{
  		cin>>g[i][j];
	  }
  }
  cout<<bfs()<<endl;
  return 0;
}



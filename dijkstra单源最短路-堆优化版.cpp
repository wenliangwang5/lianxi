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
int e[N],ne[N],h[N],w[N],idx;
bool st[N];
int d[N];
int n,m;
priority_queue<PII,vector<PII>,greater<PII>> h1;// 小根堆 局部最优取得全局最优 
void add(int a,int b,int c){
	e[idx]=b,ne[idx]=h[a],w[idx]=c,h[a]=idx++;
	
} 
int dijkstra()
{
	memset(d,0x3f,sizeof d);//距离初始化 
	d[1]=0;//
	h1.push({0,1});//队列初始化 
	while(h1.size()){
		auto t=h1.top();
		h1.pop();
		int no=t.second;
		if(st[no]) continue;//判断是否访问过 访问过跳过 
  		st[no]=true; //确定最短路经 进行标记 
		for(int i=h[no];i!=-1;i=ne[i]){//更新此节点相邻节点 
			int j=e[i];
			if(d[j]>d[no]+w[i]){//出现短的路径 更新入队 
				d[j]=d[no]+w[i];
				h1.push({d[j],j});
			}
		}
	}
	if(d[n]>0x3f3f3f3f/2) return -1;//判断是否有解 
	else return d[n];
}
signed main()
{
  cin>>n>>m;
  memset(h,-1,sizeof h);//邻接表头初始化 
  while(m--)
  {
  	int a,b,c;
  	cin>>a>>b>>c;
  	add(a,b,c);
  }
  int t=dijkstra();
  cout<<t<<endl;

  return 0;
}



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
int e[N],ne[N],h[N],idx;
int q[N];
int d[N];
int hh,tt;
void add(int a,int b){//链式向前星存储 
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
int bfs(){
	q[0]=1;//队列初始化 
	memset(d,-1,sizeof d);//距离数组初始化 
	d[1]=0;
	while(hh<=tt){
		int x=q[hh++];
		for(int i=h[x];i!=-1;i=ne[i]){
			int j=e[i];
			if(d[j]==-1){//未被访问过距离加1 入队列 
				d[j]=d[x]+1;
			    q[++tt]=j; 
			}
		}
	}
	return d[n];
}
signed main()
{
  cin>>n>>m;
  memset(h,-1,sizeof h);//头节点初始化 
  for(int i=1;i<=m;i++){//边输入 有向图 
  	int a,b;
  	cin>>a>>b;
    add(a,b);	
  } 
  cout<<bfs()<<endl;
  return 0;
}



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
int d[N];
int q[N],hh,tt=-1;
vector<int> path;
void add(int a,int b){
	
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
} 
bool solve(){//初始化入度为0队列 
	for(int i=1;i<=n;i++)
	{
		if(!d[i]) q[++tt]=i;
	}
	
	while(hh<=tt) // 队列不为空时 
	{
		int x=q[hh++];
		path.push_back(x);//队头加入答案数组里 
		for(int i=h[x];i!=-1;i=ne[i]){//更新相邻节点入度值 
			int j=e[i];
		    d[j]--;
		    if(!d[j]) q[++tt]=j;//为0时加入队列 
		}
	}
	if(path.size()<n) return false;//根据数组长度判断是否有拓扑排序 
	else return true;
}
signed main()
{
  cin>>n>>m;
  memset(h,-1,sizeof h);
  
  for(int i=1;i<=m;i++)//输入边 并且记录入度 
  {
  	int a,b;
  	cin>>a>>b;
  	add(a,b);
  	d[b]++;
  }
  if(solve()){//根据执行结果判断是否与拓扑排序 
  	for(int i=0;i<path.size();i++)
  	{
  		cout<<path[i]<<" ";
	  }
	  cout<<endl;
  }
  else cout<<-1<<endl;;
  return 0;
}



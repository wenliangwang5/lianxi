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
struct Edge{
	int a,b,w;
}edges[N];
int p[N];
bool cmp(Edge a,Edge b){
	return a.w<b.w;
}
int find(int x){//并查集时间复杂度 一次o 1 一共o n 
	if(p[x]!=x) p[x]=find(p[x]); 
	return p[x];
}
signed main()
{
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
  	int a,b,w;
  	cin>>a>>b>>w;
  	edges[i]={a,b,w};
  }
  sort(edges,edges+m,cmp);//n次排序 每次m条边 n logm复杂度 
  
  for(int i=1;i<=n;i++)
  {
  	p[i]=i;
  }
  int res=0,cnt=0;
  for(int i=0;i<m;i++)
  {
  	int a=edges[i].a,b=edges[i].b,w=edges[i].w;
  	a=find(a),b=find(b);
  	if(a!=b){
  		p[a]=b;
  		res+=w;
  		cnt++;
	  }
  }
  if(cnt<n-1) puts("impossible");//边数小于n-1证明不连通 无最小生成树 
  else cout<<res<<endl;
  return 0;
}



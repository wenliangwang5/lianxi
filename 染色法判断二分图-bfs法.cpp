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
int color[N];
int flag=true;
void add(int a,int b){
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
} 
bool bfs(int x,int t){
	color[x]=t;
	queue<int> q;
	q.push(x);
//	int ln=1,nn=0;
//	int lc=t;
	while(q.size()){
	     //ln--;
	     int u=q.front();
	     q.pop();
	     for(int i=h[u];i!=-1;i=ne[i]){
	     	int j=e[i];
	     	if(!color[j]){
	            color[j]=3-color[u];//直接分配和父节点相反颜色的即可 
	     		q.push(j);
//	     		nn++;
			 }
			 else {//当存在颜色相撞时返回 
			 	if(color[j]==color[u]) return false;
			 }
		 }
//		 if(ln==0){
//		 	ln=nn;
//		 	nn=0;
//		 	lc=3-lc;
//		 }
	}
	return true; 
}
signed main()
{
  cin>>n>>m;
  memset(h,-1,sizeof h);
  for(int i=1;i<=m;i++)
  {
  	int a,b;
  	cin>>a>>b;
  	add(a,b);
  	add(b,a);//无向图边的存储 
  }
  for(int i=1;i<=n;i++)//逐个点进行遍历 确保所有连通块都被遍历到 
  {
  	if(!color[i]){
  		if(!bfs(i,1)) flag=false;//连通块染色不成功 改变标记 
	  }
  }
  
  if(flag) puts("Yes");
  else puts("No");
  return 0;
}



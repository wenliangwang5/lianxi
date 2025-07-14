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
bool dfs(int x,int t){
	color[x]=t;
	for(int i=h[x];i!=-1;i=ne[i]){
		int j=e[i];
		if(!color[j]){
			if(!dfs(j,3-t)) {//深度搜索 染色不成功返回  深搜时递归调用 需要判断返回值 
				return false;
			}
		}
		else {//颜色相撞返回 
			if(color[j]==color[x]) return false;
		}
		
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
  		if(!dfs(i,1)) flag=false;//连通块染色不成功 改变标记 
	  }
  }
  
  if(flag) puts("Yes");
  else puts("No");
  return 0;
}



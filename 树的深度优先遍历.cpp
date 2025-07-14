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
const int N=500010,M=1010,nod=1e9+7;
int  e[N],ne[N],h[N],idx;
int n;
int ans=N;
int st[N];
void add(int a,int b){
	
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;//链式向前星存稠密图/树 
}
int dfs(int x){
	int res=0;//求连通块点数目最大值 
	st[x]=1;//修改标记位 
	int sum=1;//求当前节点下的点的数目 
	for(int i=h[x];i!=-1;i=ne[i])//当前节点下的子节点一一遍历  
	{
		int j=e[i];
		if(!st[j]){
			int s=dfs(j);//子节点包含的节点数目 深度搜索 
		    res=max(res,s);//当前节点所有连通块的节点数目最大值 
		    sum+=s;//节点数目 
		}
	}
	res=max(res,n-sum);//节点遍历完还要和n-sum比较 
	ans=min(ans,res);//最终答案 筛选最小的res 
	return sum;
} 
signed main()
{
  cin>>n;
  memset(h,-1,sizeof h);
  for(int i=1;i<n;i++)
  {
  	int a,b;
  	cin>>a>>b;
  	add(a,b);
  	add(b,a);
  }
  dfs(1);
  cout<<ans<<endl;
  return 0;
}



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
int d[N],cd[N];
int n,m,k;

void add(int a,int b,int c){
	e[idx]=b,ne[idx]=h[a],w[idx]=c,h[a]=idx++;
}
void ballman_fold(){
	memset(d,0x3f,sizeof d);
	d[1]=0;//距离初始化 
	for(int i=1;i<=k;i++)
	{
		memcpy(cd,d,sizeof d);
		for(int j=1;j<=n;j++){
			for(int u=h[j];u!=-1;u=ne[u]){
				int j1=e[u];
				d[j1]=min(d[j1],cd[j]+w[u]);//把上次更新的距离数组记录下更新下次
				//这样做为了保证跟出来的距离是最短的（每条边都做了一次松弛操作
				//否则  
			}
		}
		
	 }
	 if(d[n]>0x3f3f3f3f/2) cout<<"impossible"<<endl;
	 else cout<<d[n]; 
}
signed main()
{
  cin>>n>>m>>k;
  memset(h,-1,sizeof h);
  for(int i=1;i<=m;i++)
  {
  	int a,b,w;
  	cin>>a>>b>>w;
  	add(a,b,w);//输入每个边 
  }
ballman_fold();

  return 0;
}



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
int cot[N];
int n,m;
queue<int> q;
void add(int a,int b,int c){
	e[idx]=b,ne[idx]=h[a],w[idx]=c,h[a]=idx++;
}
void spfa(){
	bool flag=true;
	for(int i=1;i<=n;i++)//不再是单一路径 所有点都作为起始点
	//判断是否有点的路径长度超过n 
	{
		q.push(i);
		st[i]=true;
	}
	while(q.size()){
		int t=q.front();
		q.pop();
		st[t]=false;
		for(int i=h[t];i!=-1;i=ne[i]){
			int j=e[i];
			if(d[j]>d[t]+w[i]){
				d[j]=d[t]+w[i];
				cot[j]=cot[t]+1;
				if(cot[j]>=n) {
					cout<<"Yes"<<endl;//有点的路径超过n证明存在负权回路 
					return ;
				}
				if(!st[j]) {
					q.push(j);
					st[j]=true;
				}
			}
		}
		
	}
	 cout<<"No"<<endl;

}
signed main()
{
	IOS 
  cin>>n>>m;
  memset(h,-1,sizeof h);
  memset(d,0x3f,sizeof d);
  for(int i=1;i<=m;i++)
  {
  	int a,b,w;
  	cin>>a>>b>>w;
  	add(a,b,w);
	}  
  spfa();
  return 0;
}



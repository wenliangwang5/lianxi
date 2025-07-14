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
bool st[N];
int d[N];
queue<int> q;
int e[N],ne[N],h[N],w[N],idx;
void add(int a,int b,int c){
	e[idx]=b,ne[idx]=h[a],w[idx]=c,h[a]=idx++;
}
void spfa(){
	d[1]=0;
	q.push(1);
	st[1]=true;
	while(q.size()){
		int t=q.front();
		q.pop();
		st[t]=false;
		for(int i=h[t];i!=-1;i=ne[i]){
			int j=e[i];
			if(d[j]>d[t]+w[i]){
				d[j]=d[t]+w[i];
				if(!st[j]){
					q.push(j);
					st[j]=true;
				}
			}
		}
	}
	if(d[n]>0x3f3f3f3f/2) cout<<"impossible"<<endl;
	else cout<<d[n]<<endl;
}
signed main()
{
  IOS
  cin>>n>>m;
  memset(h,-1,sizeof h);
  memset(d,0x3f,sizeof d);
  while(m--){
  	int a,b,c;
  	cin>>a>>b>>c;
  	add(a,b,c);
  }
  spfa();
  return 0;
}



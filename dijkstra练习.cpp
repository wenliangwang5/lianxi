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
int st[N],d[N];
int n,m;
priority_queue<PII,vector<PII>,greater<PII>> h1;
void add(int a,int b,int c){
	e[idx]=b,ne[idx]=h[a],w[idx]=c,h[a]=idx++;
}
int dijkstra(){
	memset(d,0x3f,sizeof d);
	d[1]=0;
	h1.push({0,1});
	st[1]=1;
	while(h1.size()){
	    auto t=h1.top();
		h1.pop();
		int no=t.second;
		st[no]=0;
		for(int i=h[no];i!=-1;i=ne[i]){
			int j=e[i];
			if(d[j]>d[no]+w[i]){
				d[j]=d[no]+w[i];
				if(!st[j]){
					h1.push({d[j],j});
					st[j]=1;
				}
			}
		}	
	
	}
	if(d[n]>0x3f3f3f3f/2) return -1;
	else return d[n];
	
	
}
signed main()
{
  IOS 
  cin>>n>>m;
  memset(h,-1,sizeof h);
  while(m--){
  	int a,b,c;
  	cin>>a>>b>>c;
	  add(a,b,c); 
  }
  int t=dijkstra();
  cout<<t<<endl;
  return 0;
}



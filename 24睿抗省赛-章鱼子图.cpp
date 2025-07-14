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
int x;
int e[N],ne[N],h[N],idx,d[N];
int st[N];

void add(int a,int b){
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
void solve(){
	int n,m;
	cin>>n>>m;
	memset(e,0,sizeof e);
	memset(ne,0,sizeof ne);
	memset(h,-1,sizeof h);
	memset(d,0,sizeof d);
	memset(st,0,sizeof st);
	idx=0;
	for(int j=1;j<=m;j++){
			int a,b;
			cin>>a>>b;
			add(a,b);
			add(b,a);
			d[a]++;
			d[b]++;
		} 

	int sum=0,count=0;
	for(int i=1;i<=n;i++)
	{
		if(d[i]==1){
			queue<int> q;
			q.push(i);
			st[i]=1;
			while(q.size()){
				int t=q.front();
				q.pop();
				for(int k=h[t];k!=-1;k=ne[k]){
				   int j=e[k];
					if(!st[j]){//这段是正确的 
						if(d[j]==2){
							st[j]=1;
							q.push(j);
						}
						else if(d[j]>2){
							d[j]--;
						}
					}
					
				}
			}
			
		}else if(d[i]==0) st[i]=1;
		
	}
	
	for(int i=1;i<=n;i++){
		if(!st[i]){
			int flag=1;
			st[i]=1;
			queue<int> q;
			q.push(i);
			int las=0;
			while(q.size()){
		       int t=q.front();
		       //deb(t);
			   q.pop();
			   if(d[t]>2) flag=0;		
		  		las++;
				for(int k=h[t];k!=-1;k=ne[k]){
					int j=e[k];
					if(!st[j]){
						st[j]=1;
						q.push(j);
					}
				}
			}
			if(flag){
				count=las;
			}
		    sum+=flag;
		}
		
	}
	if(sum==1) cout<<"Yes "<<count<<endl;
  else cout<<"No "<<sum<<endl;
	
}
signed main()
{
	IOS
  cin>>x;
  for(int i=1;i<=x;i++)
  {
  	solve();
  }
  return 0;
}



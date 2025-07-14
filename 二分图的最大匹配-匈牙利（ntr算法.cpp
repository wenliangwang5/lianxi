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
int n,m,k;
int e[N],ne[N],h[N],idx;
bool st[N];
int res;
int match[N];
void add(int a,int b){
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
bool find(int x){
	for(int i=h[x];i!=-1;i=ne[i]){
		int j=e[i];
		if(!st[j]){
			st[j]=true;
			if(match[j]==0||find(match[j])){//未被匹配过或者 找到原匹配其他的匹配了 
				match[j]=x;
				return true;
			}
		}
		
	}
	return false;
	
}
signed main()
{
  cin>>n>>m>>k;
  memset(h,-1,sizeof h);
  for(int i=1;i<=k;i++)
  {
  	int a,b;
  	cin>>a>>b;
  	add(a,b);
  }
 for(int i=1;i<=n;i++){
 	memset(st,false,sizeof st);//标记访问位 每轮匹配每个女生仅能匹配一次 
 	if(find(i)) res++;
 }
 cout<<res<<endl;
  return 0;
}



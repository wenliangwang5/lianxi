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
int n;
int path[20];
int st[20];
void dfs(int u){
	if(u>=n) {
		for(int i=0;i<n;i++) cout<<path[i]<<" ";
		cout<<endl; 
	}
	
	for(int i=1;i<=n;i++)
	{
		if(st[i]) continue;
		
		path[u]=i;
		st[i]=1;
		dfs(u+1);
		st[i]=0;
		path[u]=0;
	}
}
signed main()
{
  cin>>n;
  dfs(0); 

  return 0;
}



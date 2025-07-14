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
int v[N],w[N];
int f[M];

signed main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
  	int a,b;
  	cin>>a>>b;
  	v[i]=a;
  	w[i]=b;
  }
  for(int i=1;i<=n;i++)
  {
  	for(int j=v[i];j<=m;j++){//从小到大遍历 
	   //保证每次遍历f[j-v[i]可以是本轮放过的 即无限个物品可选 保证了完全的规则 
  		if(j>=v[i]){
  			f[j]=max(f[j],f[j-v[i]]+w[i]);
		  }
	  }
  }
  cout<<f[m];
  return 0;
}



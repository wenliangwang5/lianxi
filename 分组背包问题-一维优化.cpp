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
int f[M];
struct no{
	int v,w;
};
signed main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
  	int x;
  	cin>>x;
  	vector<no> u(x);
  	for(int j=0;j<x;j++) {//整组物品输入 
  		cin>>u[j].v>>u[j].w;
	  }
	  		for(int j=m;j>=0;j--){//空间遍历 
          	  	for(auto u1:u){//遍历整组 选择值最大的单个情况 
          	  		if(j>=u1.v) f[j]=max(f[j],f[j-u1.v]+u1.w);
					}		
			  }
	  		
		  
  	
  }
  
  cout<<f[m];
  return 0;
}



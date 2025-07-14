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
int f[N];
int lt[N];
signed main()
{
  IOS
  cin>>n>>m;
  memset(lt,-1,sizeof lt);
  for(int i=1;i<=n;i++)
  {
  	cin>>f[i];
  }
  for(int i=1;i<=m;i++)
  {
    int t,k;
    cin>>t>>k;
    for(int j=1;j<=k;j++)
    {
    	int u;
    	cin>>u;
        if(f[u]==-1) continue; 
    	if(t-lt[u]<f[u]&&lt[u]!=-1) {
    		cout<<"Don't take "<<u<<" at "<<t<<"!"<<endl;
		}
		else{
			lt[u]=t;
		}
	}
  	
  }
  return 0;
}



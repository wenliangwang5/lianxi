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
#define int long long
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
int n,k,res;
int f[N],b[N];
int sg(int x){
	if(f[x]!=-1) return f[x];
	unordered_set<int> S;
	for(int i=1;i<=k;i++){
		int sum=b[i];
		if(x>=sum) S.insert(sg(x-sum));
	}
	for(int i=0; ;i++){
		if(!S.count(i)){
		  return f[x]=i;
		}
	}
}
signed main()
{
  cin>>k;
  for(int i=1;i<=k;i++) cin>>b[i];
  cin>>n;
  memset(f,-1,sizeof f);
  for(int i=1;i<=n;i++)
  {
  	int x;
  	cin>>x;
  	res^=sg(x);
  }
  if(res) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}



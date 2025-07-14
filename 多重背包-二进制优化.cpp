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
struct no{
	int v,w;
};
int f[N];
signed main()
{
  cin>>n>>m;
  vector<no> x; 
  for(int i=1;i<=n;i++)
  {
  	int a,b,s;
  	cin>>a>>b>>s;
  	for(int i=1;i<=s;i*=2)
  	{
  		s-=i;
  		x.push_back({i*a,i*b});
	  }
	  if(s>0) x.push_back({s*a,s*b});//二进制拆分不会破坏原本的组合能力
	  //结果仍是最优解 
  }
  for(auto o:x){//拆分后按照 01背包问题求解即可 
  	for(int i=m;i>=o.v;i--)
  	{
  		f[i]=max(f[i],f[i-o.v]+o.w);
	  }
  }
  cout<<f[m]<<endl;
  return 0;
}



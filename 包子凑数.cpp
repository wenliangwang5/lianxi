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
int n,gcd;
int a[N];
vector<int> dp(100001,0);
int solv(int x,int y)
{
	return y?solv(y,x%y):x;
}
signed main()
{
  cin>>n;
  for(int i=1;i<=n;i++) {
  	cin>>a[i];
  }
  gcd=a[1];
  for(int i=2;i<=n;i++) 
  {
  	  gcd=solv(gcd,a[i]);
  }
  //deb(gcd);
  
  if(gcd>1) {
  	cout<<"INF"<<endl;
  	return 0;
  }
  vector<int> dp(100001,0);
  dp[0]=1;
  for(int i=1;i<=n;i++)
  {
  	for(int j=0;j+a[i]<=100000;j++)
  	{
  		if(dp[j]) dp[j+a[i]]=1;
	  }
  }
  int ans=0;
  
  for(int i=1;i<=100000;i++) if(!dp[i]) ans++;
  cout<<ans<<endl;
  return 0;
}



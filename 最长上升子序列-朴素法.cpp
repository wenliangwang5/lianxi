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
int a[N],f[N];

signed main()
{
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  
  for(int i=1;i<=n;i++)
  {
  	f[i]=1;
  	
  	for(int j=1;j<i;j++){
  		if(a[j]<a[i]) f[i]=max(f[i],f[j]+1);
	  }
  }
  int res=0;
  for(int i=1;i<=n;i++) {
  	res=max(res,f[i]);
  }
  cout<<res;
  return 0; 
}



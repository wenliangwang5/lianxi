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
int n,p; 
signed main()
{
  cin>>n;
  int x;
  for(int i=1;i<=n;i++){
  	cin>>x;
  	if(i%2!=0) p=p^x;
  }
  if(p) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}



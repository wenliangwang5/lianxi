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
int tem,ans;
signed main()
{ 
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
  	int x;
  	cin>>x;
  	if(tem+x>m){
  		ans++;
  		tem=x;
  	    if(tem>m) tem=m;//下一次一次获得的金币超过存储上限	约束一下金币的数量 
	  }else{
	  	tem+=x;
	  }
	  
  }
    cout<<ans<<endl;
  return 0;
}



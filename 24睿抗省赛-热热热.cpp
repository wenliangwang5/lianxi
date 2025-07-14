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
int k,n;
int ans1,ans2;
signed main()
{
  cin>>k>>n;
  for(int i=1;i<=k;i++)
  {
  	int x;
  	cin>>x;
  	if(x>=35){
  		if(n!=4){
  			ans1++;
		  }
		  else {
		  	ans2++;
		  }
	  }
	    n++;
		  if(n==8) n=1;
  }
  cout<<ans1<<" "<<ans2<<endl;
  return 0;
}



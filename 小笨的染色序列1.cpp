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
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n;
  	string s;
  	cin>>n>>s;
  	vector<int> p;
  	for(int i=0;i<n;i++){
  		if(s[i]=='1') p.pb(i);
	  } 
  	if(p.empty()){
  		cout<<"YES"<<endl;
  		continue;
	  }
	  if(n<=2) {
	  	cout<<"NO"<<endl;
	  }else {
	  	if(p.size()==1||s.back()=='1'){
	  		cout<<"NO"<<endl;
		  }
		  else if(p[1]==p[0]+1) cout<<"YES"<<endl;
		  else cout<<"NO"<<endl;
	  }
  }
  
  return 0;
}



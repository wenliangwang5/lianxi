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
int t;
bool check(int x,int y,int z)
{
	return (x+y>z&&x+z>y&&y+z>x)&&y<x;
}
signed main()
{
  //cin>>t;
 for(int x=1;x<=129;x++){
  	for(int i=1;i<x;i++)
  	{
  		if(check(x,i,x&i)) {
  			cout<<x<<" "<<i<<endl;
  			break;
		  }
	  }
  	
  }

  return 0;
}



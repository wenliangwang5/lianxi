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
int t;
void solve(){
	int s1,s2;
	int n,s;
	cin>>n>>s;
	int num=0,snum=0;
	for(int i=1;i<=n;i++)
	{
		int r,c;
		cin>>r>>c;
		if(r==1) num++;
		snum+=c;
	}
	if(num>=(n+1)/2) s1=1;
	else s1=0;
	if(snum-s>=50) s2=1;
	else s2=0;
	
	cout<<s1<<" "<<s2<<endl; 
}
signed main()
{
  IOS
  cin>>t;
  for(int i=1;i<=t;i++)
  {
  	solve();
  }

  return 0;
}



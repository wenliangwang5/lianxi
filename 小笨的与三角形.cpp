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
signed main()
{
cin>>t;
while(t--)
{
	int x;
	cin>>x;
	if(x<=2) {
		cout<<-1<<endl;
		continue;
	}
	int b=x;
	int c=0;
	while(b)
	{
		c++;
		b=b>>1;
	}
	int ans=pow(2,c-1);
	if(ans==x) cout<<-1<<endl;
	else cout<<ans<<endl;
  
}

  return 0;
}



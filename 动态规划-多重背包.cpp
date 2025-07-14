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
int v[N],w[N],s[N];
int f[M]

signed main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
  	int a,b,c;
  	cin>>a>>b>>c;
  	v[i]=a;
  	w[i]=b;
  	s[i]=c;
  }
  for(int i=1;i<=n;i++)
  {
  	for(int j=m;j>=0;j--){//必须逆向遍历 否则退化为完全背包问题  
  	   for(int k=0;k<=s[i]&&k*v[i]<=j;k++)
  	   {
  	   	if(j>=k*v[i]){
  		    f[j]=max(f[j],f[j-k*v[i]]+k*w[i]);
		  }
		 }
	  }
  }
  cout<<f[m];
  return 0;
}



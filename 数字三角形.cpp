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
int f[M][M];
int t[M][M];

signed main()
{
  cin>>n;
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=i;j++)
  	{
  		cin>>f[i][j];
	  }
  }
  for(int i=1;i<=n;i++) t[n][i]=f[n][i];
  for(int i=n-1;i>=1;i--) //ÄæÏò×ö·¨  
  {
  	for(int j=1;j<=i;j++){
  	    t[i][j]=max(t[i+1][j],t[i+1][j+1])+f[i][j];
	  }
  }
  cout<<t[1][1]<<endl;
  return 0;
}



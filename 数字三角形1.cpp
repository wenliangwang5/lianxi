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
int f[M][M],t[M][M];

signed main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=i;j++)
  	{
  		cin>>f[i][j];
	  }
  }
  t[1][1]=f[1][1];
  for(int i=2;i<=n;i++)
  {
  	t[i][1]=t[i-1][1]+f[i][1];//边界值特殊处理 
  	t[i][i]=t[i-1][i-1]+f[i][i];
  	for(int j=2;j<i;j++)//正向做法 
  	{//中间值正常处理 
  		t[i][j]=max(t[i-1][j-1],t[i-1][j])+f[i][j];
	  }
  }
  int res=-0x3f3f3f3f;
  for(int i=1;i<=n;i++)
  {
  	res=max(res,t[n][i]);
  }
  cout<<res<<endl;
  return 0;
}



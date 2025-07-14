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
const int N=200010,M=1010,nod=1e9+7;\
string a,b;
int n,m;
int f[M][M];
signed main()
{
  //memset(f,0x3f,sizeof f);
  cin>>n;
  cin>>a;
  a=' '+a;
  cin>>m;
  cin>>b;
  b=' '+b;
  for(int i=1;i<=n;i++) f[i][0]=i;
  for(int i=1;i<=m;i++) f[0][i]=i;//初始情况预处理 
  for(int i=1;i<=n;i++){//枚举每一组 对每一组情况进行判断 
  	for(int j=1;j<=m;j++){
  		f[i][j]=min(f[i-1][j],f[i][j-1])+1;//先判断增和删的情况 
  		if(a[i]!=b[j]) f[i][j]=min(f[i][j],f[i-1][j-1]+1);//判断是否要改 
  		else f[i][j]=min(f[i][j],f[i-1][j-1]);
	  }
  }
  cout<<f[n][m]<<endl;
  return 0;
}



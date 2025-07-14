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
int w[2010][2010];
void init(){
	
	for(int i=0;i<=2000;i++){
		for(int j=0;j<=i;j++){
			if(!j) w[i][j]=1;
			else w[i][j]=(w[i-1][j]+w[i-1][j-1])%nod;
		}
	}
} 
signed main()
{
  init();
  int x;
  cin>>x;
  while(x--){
  	int a,b;
  	cin>>a>>b;
  	cout<<w[a][b]<<endl; 
  }

  return 0;
}



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
const int N=100010,M=1010,nod=1e9+7;
int fact[N],infact[N];
// 时间复杂度：预处理数据a次，每次进行一次快速幂求法 a*log(nod) 
int qmi(int a,int k,int p){//快速幂 不多解释 
    int res=1;
    while(k){
    	if(k&1) res=(ll)res*a%p;
    	a=(ll)a*a%p;
    	k=k>>1;
	}
	return res;
} 
signed main()
{

   fact[0]=infact[0]=1;
   for(int i=1;i<N;i++){//循环预处理  
  	fact[i]=(ll)fact[i-1]*i%nod;//阶乘累乘 
  	infact[i]=(ll)infact[i-1]*qmi(i,nod-2,nod)%nod;//逆元累乘 
	  //b的阶乘逆元等于b-1的阶乘逆元和b的逆元的乘积  b的逆元等于b的mod-2次方
	   
  } 
  int n;
  cin>>n;
  while(n--)
  {
  	int a,b;
  	
  	cin>>a>>b;
  	cout<<((ll)fact[a]*infact[b]%nod*infact[a-b])%nod<<endl;
  }
  return 0;
}



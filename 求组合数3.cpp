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
int p;
int qmi(int a,int k){//快速幂求逆元 （log2 N） 
	int res=1;
	while(k){
		if(k&1) res=(ll)res*a%p;
		a=(ll)a*a%p;
		k=k>>1;
	}
	return res;
}
int C(int a,int b){ //基本逆元求组合数方法 (p * log 2 N)
	int res=1;
	for(int i=1,j=a;i<=b;i++,j--)
	{
		res=(ll)res*j%p;//分子累乘 a<b的话乘以0 直接为0 
		res=(ll)res*qmi(i,p-2)%p;//分母逆元累乘 
	}
	return res;
}
int lucas(ll a,ll b){
	if(a<p&&b<p) return C(a,b);//卢卡斯定理基本方法
	 
	return (ll)C(a%p,b%p)*lucas(a/p,b/p)%p;//(log p N)
}
signed main()//(n*p*log p N*log N)
{
  int n;
  cin>>n;
  while(n--){
  	ll a,b;
  	cin>>a>>b>>p;
  	cout<<lucas(a,b)<<endl;
  }

  return 0;
}



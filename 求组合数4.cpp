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
const int N=5010,M=1010,nod=1e9+7;
int primes[N],cnt;
int sum[N];
bool st[N];
void ger_primes(int n){//欧拉筛求范围内的质数 
	for(int i=2;i<=n;i++)
	{
		if(!st[i]) primes[cnt++]=i;
		for(int j=0;primes[j]<=n/i;j++)
		{
			st[primes[j]*i]=true;
			if(i%primes[j]==0) break;
		}
	}
}
int get(int n,int p){//求n的阶乘下的p的次方 
	int res=0;
	while(n){
		res+=n/p;
		n/=p;
	}
	return res;
}
vector<int> mul(vector<int> a,int b){
	vector<int> c;
	int t=0;
	for(int i=0;i<a.size();i++){
		t+=a[i]*b;
		c.push_back(t%10);
		t/=10; 
	}
	while(t){
		c.push_back(t%10);
		t/=10;
	}
	return c;
}
signed main()
{
  int a,b;
  cin>>a>>b;
  ger_primes(a);
  for(int i=0;i<cnt;i++){
  	int p=primes[i];
  	sum[i]=get(a,p)-get(b,p)-get(a-b,p);//算出每个质数的次方之差 
  }
  vector<int> res;
  res.push_back(1);
  for(int i=0;i<cnt;i++){
  	for(int j=0;j<sum[i];j++){
  		res=mul(res,primes[i]);//高精度乘法 
	  }
  }
  for(int i=res.size()-1;i>=0;i--) cout<<res[i];
  
  cout<<endl;
  return 0;
}



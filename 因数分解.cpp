#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
ll n;
int main()
{
  cin>>n;
  if(n<=2) {
  	cout<<-1;
  	return 0 ;
  }
  ll k=n+1;//根据韦达定理得出a+b=p,a*b=q p+q=k;
    //那么（a+1）*(b+1)=k+1;根据因数分解求得a b再带入p q里面验证和是否为k
  for(ll i=2;i<=k/i;i++)
 {
  	if(k%i==0)
  	{
  		ll a=i-1,b=k/i-1;
  		ll p=a+b;
  		ll q=a*b;
  		if(p+q==n) 
  		{
  			cout<<p<<" "<<q;
  			return 0;
		  }
	  }
  }
    cout<<-1;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
ll t,a,b,p;

void solve(ll a,ll b,ll p)
{
	ll ans=1;
	a%=p;
	while(b)
	{
		if(b&1) ans=(ans*a)%p;
		b=b>>1;
		a=a*a;
	}
	cout<<ans%p<<endl;
}
int main()
{
  cin>>t;
  while(t--)
{
	cin>>a>>b>>p;
    solve(a,b,p);
}

  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll n,m,q;
bool flag;
vector<ll> x;
bool check(ll r)
{ 
 if(r==m) {
 	flag=true;
 	return true;
 }
 return false;
}
void solve()
{
	ll n1=n,cnt=0;
	while(cnt<=q&&!check(n1))
	{
		ll t=n1%10;
		t=(t*t)%10;
		n1/=10;
	    if(t)
	    {
	    ll tem=n1,o=1;	
	    while(tem)
	    {
	    	o*=10;
	    	tem/=10;
		}
		n1=n1+t*o;
		}
		x.push_back(n1);
		cnt++;
	}
	
	if(flag) 
	{
		for(auto z:x)
		{
			cout<<z<<endl;
		}
	}
	else cout<<-1<<endl;
}
int main()
{
  cin>>n>>m>>q;
  solve();
  return 0;
}



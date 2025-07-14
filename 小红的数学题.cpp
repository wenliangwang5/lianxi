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
  ll k=n+1;
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
  return 0;
}



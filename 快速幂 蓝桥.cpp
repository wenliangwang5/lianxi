#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
void solve()
{
	ll a,b,k;
	cin>>a>>b>>k;
	ll res=1;
	
	while(b)
	{
		if(b&1) res=(res*a)%k;
		b=b>>1;
		a=(a*a)%k; 
	}

    cout<<res;	
   
}
int  main()
{
  
  solve();
  return 0;
}



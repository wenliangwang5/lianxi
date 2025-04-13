#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll n,x;
unordered_map<ll,ll> st;
ll solve(ll a)
{
	return a*(a-1)/2;
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>x;
  	ll c=(x*i);
  	st[c]++;
  }
  ll sum=0;
  
  for(auto z=st.begin();z!=st.end();z++){
  	if(z->second>1) sum++;
  }
  cout<<sum;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll n,k;
ll a[N],mod1=1e9+7;
vector<ll> p;
vector<ll> x1[N]; 
int get(int x)
{
	return lower_bound(p.begin(),p.end(),x)-p.begin()+1;
	
}
ll f(int x)
{
	ll ans=0;
	if(x1[x].size()==1) return 2;
	ll l=0,r=0,n1=x1[x].size();
	while(l<n1)
    {
    	while(r+1<n1&&x1[x][r+1]-x1[x][l]<=k) r++;
    	if(x1[x][r]-x1[x][l]<k)ans+=r-l;
    	l++;
    	}
    	return ans+n1+1;
}
int main()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  	p.push_back(a[i]);
  }
  sort(p.begin(),p.end());
  p.erase(unique(p.begin(),p.end()),p.end());
  for(int i=1;i<=n;i++)
  {
  	int t=get(a[i]);
  	x1[t].push_back(i);
  }
  ll res=1;
  for(int i=1;i<=p.size();i++)
  {
  	res=(res*f(i))%mod1;
  }
  cout<<res-1;
  return 0;
}



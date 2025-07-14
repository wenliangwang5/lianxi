#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010,haxi=100007;
int n,k,ans;
vector<ll> all;
vector<ll> c;
unordered_map<int,int> st;
int sele(ll p)
{
	int l=0,r=all.size()-1;
	while(l<r)
	{
		int mid=l+r>>1;
		if(all[mid]<p) l=mid+1;
		else r=mid;
		
	}
	return l;
}
int main()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++)
  {
  	int p;
  	cin>>p;
  	c.push_back(p);
  	all.push_back(p);
  	all.push_back(p+k); 
  } 
  sort(c.begin(),c.end());
  sort(all.begin(),all.end());
  all.erase(unique(all.begin(),all.end()),all.end());
  for(int i=0;i<n;i++)
  {
  	int idx=sele(c[i]),lidx=sele(c[i]+k);
  	if(st[idx]==0){
  		 ans++;
  		 st[lidx]=1;
	  }
  }
  cout<<ans;
  return 0;
}



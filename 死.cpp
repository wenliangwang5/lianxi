#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<ll,ll> PII;
const int N=200010,M=1010;
int main()
{    int t;
	cin>>t;
  while(t--)
  {
  	ll n,k;
  	cin>>n>>k;
  	vector<ll> a(n+1);
  	priority_queue<PII> q;
  
  	for(int i=1;i<=n;i++)
  	{
  		cin>>a[i];
  		if(i>1) q.emplace(a[i],i); 
	  }
	  vector<ll> st(n+1);
	  while(k--)
	  {
	  	auto t=q.top();
	  	q.pop();
	  	a[1]+=t.x;
	  	st[t.y]=1;
	  }
	  
	  for(int i=1;i<=n;i++)
	  {
	  	if(!st[i]) cout<<a[i]<<" ";
	  }
	  cout<<endl;
  }
 
  return 0;
}



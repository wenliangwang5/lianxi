#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<ll,ll> PII;
const int N=100010,M=1010;
int  n,res;
PII a[N];
ll st,end1=-2e9; 
bool cmp(PII a,PII b)
{
	return a.second<b.second;
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	ll x,y;
  	cin>>x>>y;
  	a[i]={x,y};
  }
  
  sort(a+1,a+1+n,cmp);
  for(int i=1;i<=n;i++)
  {
  	if(end1>=a[i].first) continue;
  	else {
  		
  		res++;
  		end1=a[i].second; 
	  }
  	
  }
  cout<<res;
  return 0;
}



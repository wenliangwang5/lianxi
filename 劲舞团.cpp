#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<ll,int> PII;
const int N=100010,M=1010;
vector<PII> x;

int main()
{
   int n=2000;
  
   while(n--)
   {
   	char a,b;
   	ll x1;
   	cin>>a>>b>>x1;
   	if(a==b) x.push_back({x1,1});
   	else x.push_back({x1,0});
   }
  
  ll las,k=0,ans=0;
  for(int i=0;i<x.size();i++)
  {
   if(x[i].second==1)
  {
  	if(k==0) {
  		k++;
	  }
	  else {
	  	if(x[i].first-las<=1000)
	  	{
	  		k++;
		  }
		  else 
		  {
		  	ans=max(ans,k);
		  	k=1;
		  }
	  }
  }else {
   ans=max(ans,k);
   k=0;
  }
  las=x[i].first;
}
  ans=max(ans,k);
  cout<<ans;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll a[N],s[N];
int n;
multiset <long long> s1;
int main()
{
  IOS
  cin>>n;
  for(int i=1;i<=n;i++) 
  {
  	cin>>a[i];
  	s[i]=s[i-1]+a[i];
  }
  for(int i=1;i<=n;i++)
  {
  	for(int j=i;j<=n;j++)
  	{
  		s1.insert(s[j]-s[i-1]);
	  }
  }
  ll res=1e9;
  for(int i=1;i<=n;i++){
  	for(int r=i;r<=n;r++)
  	{
  		s1.erase(s1.find(s[r]-s[i-1]));
	  }
  	
  	for(int j=1;j<=i;j++)
  	{
  		auto k=s[i]-s[j-1];
  		
  		auto p=s1.lower_bound(k);
  		if(p!=s1.end())
  		{
  			res=min(res,abs(*p-k));
		  }
	    if(p!=s1.begin())
	    {
	    	p--;
	    	res=min(res,abs(*p-k));
		}
		
	  }
  	
  }
  
  cout<<res;
  return 0;
}



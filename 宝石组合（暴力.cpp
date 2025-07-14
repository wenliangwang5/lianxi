#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
ll s[N];
ll n; 
ll gcd(ll a,ll b)
{
	return b?gcd(b,a%b):a;
}
ll lcm(ll a,ll b)
{
    return a*b/gcd(a,b);	
}
double calc(ll a,ll b,ll c)
{
	ll ab=lcm(a,b);
	ll ac=lcm(a,c);
	ll bc=lcm(b,c);
	ll abc=lcm(ab,c);
	return 1.0*a*b*c*abc/(ab*ac*bc);
}
bool check(vector<int> a,vector<int> b)
{
	for(int i=0;i<3;i++)
	{
		if(a[i]<b[i]) return true;
	}
	return false;
}
int main()
{
  IOS
  cin>>n;
  for(int i=1;i<=n;i++) cin>>s[i];
  double maxs=-1;
  vector<int> d(3);
  for(int i=1;i<=n;i++)
  {
  	for(int j=i+1;j<=n;j++)
  	{
  		for(int z=j+1;z<=n;z++)
  		{
  			ll h1=s[i],h2=s[j],h3=s[z];
  			double s1=calc(h1,h2,h3); 
  			if(s1>maxs)
  			{
  				maxs=s1;
  				d[0]=s[i],d[1]=s[j],d[2]=s[z];
			  }
			  else if(s1==maxs)
			  {
			  	vector<int> d1(3);
			  	d1[0]=s[i],d1[1]=s[j],d1[2]=s[z];
			  	sort(d.begin(),d.end());
			  	sort(d1.begin(),d1.end());
			  	if(check(d1,d)) d=d1; 
			  }
  			
		  }
	  }
  }
  sort(d.begin(),d.end());
  for(int i=0;i<3;i++) cout<<d[i]<<" ";
  return 0;
}



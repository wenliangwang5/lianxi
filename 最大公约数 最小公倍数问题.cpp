#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int a,b;
int ans;
int gcd(int x,int y)
{
	return y?gcd(y,x%y):x; 
}

bool check(int x,int y)
{
	
	return (gcd(x,y)==a)&&(x*y/gcd(x,y)==b); 
	
}
int main()
{
  
  cin>>a>>b;
  ll z=a*b;
  
  for(int i=a;i<=sqrt(z);i++)
  {
  	if(check(i,z/i)) ans++;
  	
  }
  ans=ans*2;
  if(a==b) ans--;
  cout<<ans;
  return 0;
}



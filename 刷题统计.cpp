#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int main()
{
	ll a,b,n,x,y,z;
	cin>>a>>b>>n;
	ll sum=5*a+2*b;
	 x=7*(n/sum);
     y=(n%sum)/(5*a);
     if(y)
     {
     	z=ceil(((n%sum)%(5*a))*1.0/b);
	 }
     else 
     {
     	z=ceil((n%sum)*1.0/a);
	 }
     cout<<x+5*y+z;
  return 0;
}


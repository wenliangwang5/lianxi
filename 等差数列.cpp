#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
ll a;
vector<int> x;
int gcd(ll a,ll b)
{
	if(a>b) return b?gcd(b,a%b):a;
	else return a?gcd(a,b%a):b;
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) 
  {
  	 cin>>a;
  	 x.push_back(a);
  }
  ll res=0;
  sort(x.begin(),x.end());
  for(int i=1;i<x.size();i++)
  {
  	res=gcd(res,x[i]-x[0]);
  }
  if(res) cout<<(x[x.size()-1]-x[0])/res+1;
  else cout<<n;
  return 0;
}



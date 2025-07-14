#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int main()
{
  double x;
  cin>>x;
  double l=-10000,r=10000;
  while(r-l>1e-8)
  {
  	double mid=(l+r)/2;
  	if(mid*mid*mid>=x) r=mid;
  	else l=mid;
  }
  printf("%lf",l);
  return 0;
}


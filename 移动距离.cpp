#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int main()
{
  int a=233,b=666;
  double c=sqrt(a*a+b*b);
  double x=atan(1.0*666/233);
  x=x*(180/M_PI);
  cout<<round(c+2*M_PI*c*(x/360));
  return 0;
}



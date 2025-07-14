#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
double x,y;
int n;
double f(double x)
{
	return x/(2*x+1);
}
 
int main()
{
cin>>x>>y;
  while(f(x)>y)
  {
  	n++;
  	x=f(x);
  }
  cout<<n;
  return 0;
}



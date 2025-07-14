#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,a[N];
double x=100,p;
int main()
{
  double d1,d2,tem;
  cin>>n;
  d1=100;
  d2=0;
  for(int i=1;i<=n;i++)
  {
  	double p;
  	tem=d1;
  	cin>>p;
  	d1=max(d1,d2/(p/100));
  	d2=max(d2,d1*(p/100));
  }
  
  printf("%.2f",d1);
  

  return 0;
}



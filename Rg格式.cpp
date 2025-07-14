#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;

const int N=100010;
int  main()
{
   int n;
   long double d;
  scanf("%d%Lf",&n,&d);
  
 long double x=pow(2,n)*d;
  ll p=round(x);
  printf("%lld",p);
  return 0;
}



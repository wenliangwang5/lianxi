#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int main()
{ 
  int n,a;
  int sum=0;
  cin>>n>>a;
  int k=1;
  for(int i=n;i>=1;i--)
  {
  	sum+=i*(a*k);
	k*=10; 
  }
   cout<<sum;

  return 0;
}


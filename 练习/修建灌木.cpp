#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int a[N]; 
int main()
{
  cin>>n;
  for(int i=1;i<=(n+1)/2;i++)
  {
  	a[i]=2*(n-i);
  }
  if(n%2==0)
  {
  	for(int i=1;i<=(n+1)/2;i++) cout<<a[i]<<'\n';
  	for(int i=(n+1)/2;i>=1;i--) cout<<a[i]<<'\n';
  }
  else {
  	
  	for(int i=1;i<=(n+1)/2;i++) cout<<a[i]<<'\n';
  	for(int i=(n+1)/2-1;i>=1;i--) cout<<a[i]<<'\n';
  }
  return 0;
}



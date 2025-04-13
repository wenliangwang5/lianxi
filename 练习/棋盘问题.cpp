#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int z,c;

int main()
{
  cin>>n>>m;
  c=(m+1)*(n+1)*n*m/4;//算长方形 包括正方形 
  for(;n>=1&&m>=1;m--,n--)
  {
  	z+=n*m;//算正方形 
  }
  cout<<z<<" "<<c-z;//分别输出 
  return 0;
}



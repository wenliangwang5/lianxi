#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int a,b,sum,las;
int main()
{ 
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	cin>>a>>b;//简单记录下每天的不开心 求和就行 
  	las=las+a+b-8;
  	sum+=las;
  }
  cout<<sum; 
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int z,c;
int n,m; 
int main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  for(int a=i+1;a<=n;a++)
  for(int b=j+1;b<=m;b++)
  {
  	if(a-i==b-j) z++;
	  else c++; 
   } 
  cout<<z<<" "<<c;
  return 0;
}



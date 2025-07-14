#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int main()
{
  IOS;
  int n,m;
  cin>>n>>m;
  vector<ll> a(n+1),b(m+1);
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int j=1;j<=m;j++) cin>>b[j];
  
  for(int i=1;i<=m;i++)
  {
  	for(int j=1,last=0;j<=n;j++)
  	{
  		if(last>a[j]) continue;
  		
  		auto idx=min(a[j]-last,b[i]-last);
  		last=min(a[j],b[i]);
  		
  		a[j]+=idx;
  		if(last>=b[i]) break;
	  }
   } 
for(int i=1;i<=n;i++) cout<<a[i]<<endl;
  return 0;
}


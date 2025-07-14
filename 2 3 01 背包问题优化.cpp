#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=1010;
int n,m;
int f[N];
int v[N],w[N];
 

int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++) cin>>v[i]>>w[i];
  
  for(int i=1;i<=n;i++)  
  {
  	for(int j=m;j>=v[i];j--)
  	{
  		
  			f[j]=max(f[j],f[j-v[i]]+w[i]);
		 
	  }
  	
  }
  int res=0;
  
  
  cout<<f[m]<<endl;
  return 0;
}


#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int a,b,c;
int n,k;
int main()
{
  cin>>n;
  while(n--)
  {
  	cin>>a>>b>>c;
  	cin>>k;
  	while(k--)
  	{
  		int la=a;
  		int lb=b;
  		int lc=c;
  		a=(lb+lc)/2;
  		b=(la+lc)/2;
  		c=(la+lb)/2;
  		if(a==b&&b==c) break;
	  }
  	cout<<a<<" "<<b<<" "<<c;
  	cout<<endl;
  	
  }
  

  return 0;
}



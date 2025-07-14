#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll sa(int x)
{
	return (1+x)*x/2;
}

ll sb(int x)
{
	ll t=1;
	for(int i=1;i<=x;i++)
	{
		t*=i;
		
	}
	return t;
}
int main()
{
  int p,ans=0;
  cin>>p;
  for(int i=1;i<=p;i++)
  {
  	if((sa(i)-sb(i))%100==0) ans++,cout<<i<<endl;;
	if(i%1000==0) cout<<ans<<endl; 
  }
  cout<<ans<<endl; 
  return 0;
}



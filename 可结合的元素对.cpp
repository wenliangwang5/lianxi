#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll n,ans;
unordered_map<int,int> res;
ll lowbit(ll x) 
{
	return x&-x;
}
int main()
{
  cin>>n;
  while(n--)
  {
  	int x;
  	cin>>x;
  	for(int i=0;i<=30;i++)
  	{
  		int p=(1<<i)-x;
  		if(p>=0)
  		{
  			ans+=res[p];
		  }
  		
  		
	  }
	  res[x]++;
  }
  cout<<ans;
  return 0;
}



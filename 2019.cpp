#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n=2019;
ll ans;
bool check(ll x)
{
	while(x)
	{
		int t=x%10;
		if(t==2||t==0||t==1||t==9) return true;
		x/=10;
	}
	return false;
 } 
int main()
{
  for(ll i=1;i<=n;i++)
  {
  	if(check(i)) ans+=i*i;
  }
  cout<<ans;
  return 0;
}



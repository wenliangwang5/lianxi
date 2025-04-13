#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll k,p=1;
ll cot(ll x)
{
	ll cnt=0;
	while(x>0)
	{
		cnt+=x/5;
		x/=5;
	}
	return cnt;
}
int main()
{

 IOS
 cin>>k;
 ll l=1,r=9e18;
 while(l<r)
 {
 	ll mid=l+r>>1;
 	if(cot(mid)<k) l=mid+1;
 	else r=mid;
 }
  if(cot(l)==k) cout<<l<<endl;
  else cout<<-1<<endl;
  return 0;
}



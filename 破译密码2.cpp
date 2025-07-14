#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
struct no{
	
	ll a,b;
}arr[N];
bool cmp(no x,no y)
{
	return min(x.a,y.b)<min(y.a,x.b);
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) cin>>arr[i].a; 
  for(int i=1;i<=n;i++) cin>>arr[i].b;
  sort(arr+1,arr+1+n,cmp);
  ll ans=arr[1].a+arr[1].b;
  ll tem=arr[1].b;
  
  for(int i=2;i<=n;i++)
  {
  	if(arr[i].a<=tem) 
  	{
  		ans+=arr[i].b;
  		tem-=arr[i].a;
	  }
  	else {
  		ans+=arr[i].a-tem+arr[i].b;
  		tem=0;
	  }
	  
	  tem+=arr[i].b;
  }
  cout<<ans;
  return 0;
}



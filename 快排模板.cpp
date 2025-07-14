#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
ll n;
ll a[N];
void quick_sort(ll a[],ll l,ll r)
{
	if(l>=r) return ;
	ll x=a[(l+r)>>1],i=l-1,j=r+1;
	while(i<j)
	{
		while(a[++i]<x);
		while(a[--j]>x);
		
		if(i<j) swap(a[i],a[j]);
	}
	quick_sort(a,l,j);
	quick_sort(a,j+1,r);
	return ;
}
int main()
{
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  quick_sort(a,0,n-1);
  for(int i=0;i<n;i++) cout<<a[i]<<" ";

  return 0;
}



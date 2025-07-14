#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int a[N];
int n,m;
 
void solve()
{
	int x;
	cin>>x;
	int l=0,r=n-1;
	while(l<r)
	{
		int mid=l+r>>1;
		if(a[mid]>=x) r=mid;
		else l=mid+1;
	}
	if(a[l]!=x) cout<<"-1 -1"<<"\n";
	
	else 
	{
		cout<<l<<" ";
		 l=0,r=n-1;
		while(l<r)
		{
			int mid=l+r+1>>1;
			if(a[mid]<=x) l=mid;
			else r=mid-1;
		}
		cout<<l<<" "<<endl;
	}
}
int main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++) cin>>a[i];
  while(m--)
  {
  	solve();
  }
  return 0;
}



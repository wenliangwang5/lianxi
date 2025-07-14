#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,k;
int a[N],b[N];
int check(int x)
{
	int ans=0;
	
	for(int i=1;i<=n;i++)
	{
		int tem=1;
		tem*=(a[i]/x);
		tem*=(b[i]/x);
		ans+=tem;
	}
	return ans;
}
int main()
{
  cin>>n>>k;
  int l=1,r;
  for(int i=1;i<=n;i++) 
  {
  	cin>>a[i]>>b[i];
  	r=max(a[i],r);
  	r=max(b[i],r);
  }
  
  while(l<r)
  {
  	int mid=l+r+1>>1;
  	if(check(mid)<k) r=mid-1;
	  else l=mid; 

  }
  cout<<l;
  return 0;
}



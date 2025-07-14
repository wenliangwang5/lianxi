#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int a[N],q[N];

int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  q[0]=-2e9;
  int len=0;
  for(int i=1;i<=n;i++)
  {
  	int l=0,r=len;
  	while(l<r)
  	{
  		int mid=l+r+1>>1;
  		if(a[mid]>=a[i]) r=mid-1;
  		else l=mid; 
	  }
  	len=max(len,l+1);
  	q[l+1]=a[i];
  	
  }
  cout<<len;
  return 0;
}



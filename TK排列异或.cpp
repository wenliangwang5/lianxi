#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int n;
int a[N],b[N];
int o[22];
int sele(int x)
{
	int l=0,r=22;
	while(l<r)
	{
		int mid=l+r>>1;
		if(o[mid]<=x) l=mid+1;
		else r=mid;
	}
	return o[l];
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=22;i++)
  {
  	o[i]=pow(2,i-1);
	}  
  for(int i=n;i>=1;i--)
  {
  	if(b[i]) continue;
  	int p=(sele(i)-i-1);
  	b[i]=p;
  	b[p]=i;
  }
 for(int i=1;i<=n;i++)
 {
 	cout<<b[a[i]]<<" ";
 }
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,a[N],tem[N];
ll ans;
void merg_sort(int a[],int l,int r)
{
	if(l>=r) return ;
	int mid=l+r>>1;
	merg_sort(a,l,mid),merg_sort(a,mid+1,r);
	int k=0,i=l,j=mid+1;
	while(i<=mid&&j<=r)
	{
		if(a[i]<=a[j]) tem[k++]=a[i++];
		else tem[k++]=a[j++],ans+=mid-i+1;
	 } 
	while(i<=mid) tem[k++]=a[i++];
	while(j<=r) tem[k++]=a[j++];
	
	for(int i=l,k=0;i<=r;i++) a[i]=tem[k++];
 }
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }
  merg_sort(a,1,n);
  cout<<ans;
  return 0;
}



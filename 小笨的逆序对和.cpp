#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int t,n;
ll a[N],tem[N];

void merg_sort(ll a[],int l,int r,ll &max1)
{
	if(l>=r) return ;
	int mid=l+r>>1;
	merg_sort(a,l,mid,max1),merg_sort(a,mid+1,r,max1);
	int k=0,i=l,j=mid+1;
	while(i<=mid&&j<=r)
	{
		if(a[i]<=a[j]) tem[k++]=a[i++];
		else {
		
				max1=max(max1,a[mid]+a[j]);
			tem[k++]=a[j++];
		}
	 } 
	while(i<=mid) tem[k++]=a[i++];
	while(j<=r) tem[k++]=a[j++];
	
	for(int i=l,k=0;i<=r;i++) a[i]=tem[k++];
 }
int main()
{
	IOS
   cin>>t;
   while(t--)
   {
   	  cin>>n;
   	  
   	  for(int i=1;i<=n;i++) cin>>a[i];
   	  ll max1=0;
   	  merg_sort(a,1,n,max1);
	  cout<<max1<<endl;
   }
  
  return 0;
}



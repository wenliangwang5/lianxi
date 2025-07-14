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
int t;
int n,max1;
int a[N];
int tem[N];
void merg_sort(int a[],int l,int r)
{
	if(l>=r) return ;
	int mid=l+r>>1;
	merg_sort(a,l,mid);
	merg_sort(a,mid+1,r);
	int i=l,j=mid+1,k=1;
	while(i<=mid&&j<=r)
	{
		if(a[i]<a[j]) tem[k++]=a[i++];
		else {
			max1=max(max1,a[mid]+a[j]);
			tem[k++]=a[j++];
		}
		
	}
    while(i<=mid) tem[k++]=a[i++];
	while(j<=r)   tem[k++]=a[j++];
	
	for(int i=l,k=1;i<=r;) a[i++]=tem[k++];
}

int main()
{
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	for(int i=1;i<=n;i++)
  	{
  		cin>>a[i];
	  }
	  max1=0;
  	  merg_sort(a,1,n);
  	
  	cout<<max1<<endl;
  }

  return 0;
}



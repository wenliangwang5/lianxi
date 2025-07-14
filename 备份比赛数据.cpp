#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int a[N],b[N];
int n,k,mi;
bool check(int x)
{
	int da=1,mi=x;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>x) return 0;
		if(mi>=a[i])
		{
			mi-=a[i];
			while(mi<b[i]) da++,mi+=x;
			mi-=b[i];
		}
		else 
		{
			da++;
			mi=x;
			i--;
		}
		if(da>k) return 0; 
	}
	
	return da<=k;
}
int main()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }
  for(int i=1;i<=n;i++) cin>>b[i];
  b[n]=0;
  int l=1,r=10000;
  
  while(l<r)
  {
  	
  	int mid=l+r>>1;
  	if(check(mid)) 
  	{
	  r=mid;
	  }
  	else 
  	{
  		l=mid+1;
	  }
  }
  if(r<=3600) cout<<r;
  else cout<<-1;
  return 0;
}



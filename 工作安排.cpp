#pragma GCC optimize(2)
#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=5010,M=1010;
int n,k;
struct th{
	int t,d,p;
	bool operator<(const th &a) const{
	   if(a.d!=d)
	   {
	   	return d<a.d;
	   }
	   else if(a.t!=t)
	   {
	   	return t<a.t;
	   }
	}
}a[N];
int f[N];
void solve(int k)
{
	memset(f,0,sizeof f);
	sort(a+1,a+1+k);
	
	for(int i=1;i<=k;i++)
	{
		for(int j=a[i].d;j>=a[i].t;j--)
		{
			
				f[j]=max(f[j],f[j-a[i].t]+a[i].p);
			
		}
	}
	    int max1=0;
		for(int i=0;i<=N;i++)
		{
			max1=max(max1,f[i]);
		}
     	cout<<max1<<endl;
}
int main()
{
	IOS
  cin>>n;
  while(n--)
  {
  	cin>>k;
  	for(int i=1;i<=k;i++)
  	{
  		int t,d,p;
  	    cin>>t>>d>>p;
	    a[i]={t,d,p};
	  }
  	solve(k);
  }
 
  return 0;
}



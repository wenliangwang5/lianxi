#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,k,t;
ll a[N],s1[N],s2[N];
bool flag;
bool check(int m)
{
	vector<ll> x;
	for(int i=1;i<=m;i++) x.push_back(a[i]);
	sort(x.begin(),x.end());
	for(int i=1;i<=m;i++)
	{
		s1[i]=s1[i-1]+x[i-1];
		s2[i]=s2[i-1]+x[i-1]*x[i-1];
	}
	
	for(int j=k;j<=m;j++)
	{
		double q1,q2;
	    q1=(s1[j]-s1[j-k])*1.0/k;
	    q1=q1*q1;
	    q2=(s2[j]-s2[j-k])*1.0/k;
	
	if(q2-q1<t) {
		flag=true;
		return true;
	}
	}
	return false;
}
int main()
{
  cin>>n>>k>>t;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }
  
  int l=k,r=n;
  
  while(l<r)
  {
  	int mid=l+r>>1;
  	if(check(mid)) r=mid;
  	else l=mid+1;
  }
  if(flag) cout<<l;
  else cout<<-1;
  return 0;
}



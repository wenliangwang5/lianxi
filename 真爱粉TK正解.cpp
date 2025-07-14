#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
string a[N];
ll n,k;

bool check(ll mid)
{
	ll m=1,sum=0;
	ll C_5=0;
	for(int i=n;i>=1;i--)
	{
		ll c_5=0,sum1=0;
		for(int j=a[i].size()-1;j>=0;j--){
			if(a[i][j]=='5'){
				 C_5++;
				 c_5++;
			}
			if(a[i][j]=='2')
			{
				sum+=C_5;
				sum1+=c_5;
			}
		}
		if(sum>mid)
		{
		   if(sum1>mid) return false;
		    m++;
		    C_5=c_5;
		    sum=sum1;
		}		
	}
	return m<=k;
}

int main()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }
   
  ll l=0,r=1e15;
  while(l<r)
  {
  	ll mid=l+r>>1;
  	if(check(mid)) r=mid;
  	else l=mid+1;
  	
  }
  cout<<l<<endl;
  return 0;
}



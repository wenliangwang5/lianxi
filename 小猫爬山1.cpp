#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll n,k,ans;
ll cab[N];
ll a[N];
bool cmp(ll a,ll b)
{
	return a>b;
}
void dfs(ll i,ll cnt)
{
	if(cnt>ans) return ;
	if(i==n+1) {
		ans=min(ans,cnt);    
		return;
	}
	bool flag=false;
	for(int j=1;j<=cnt;j++)
	{
		if(a[i]+cab[j]<=k)
		{
			flag=true;
			cab[j]+=a[i];
		    dfs(i+1,cnt);
		    cab[j]-=a[i];
		 } 
		 
		 
   }
		cab[cnt+1]+=a[i];
		 	dfs(i+1,cnt+1);
		 	cab[cnt+1]-=a[i];
		 
		 
}
int main()
{ 
  cin>>n>>k;
  for(int i=1;i<=n;i++) cin>>a[i];
  
  ans=n;
  sort(a+1,a+1+n,cmp);
  dfs(1,0);
  cout<<ans;
  return 0;
}



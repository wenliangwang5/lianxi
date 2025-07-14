#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int a[N],b[N]; 
ll sa[N],sb[N];
ll ans,res=1e18;
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) {
  	cin>>a[i];
  	sa[i]=sa[i-1]+a[i];
  }
  for(int i=1;i<=n;i++) {
  	cin>>b[i];
  	sb[i]=sb[i-1]+b[i];
  }
for(int i=1;i<=n;i++)
{
	ans=sa[i]+sb[n]-sb[i];
	res=min(res,ans);
	ans=sb[i]+sa[n]-sa[i];
	res=min(res,ans);
}
  cout<<res;
  return 0;
}



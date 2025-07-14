#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll a[N];
int cnt[N];
int n,m;
int main()
{
  int n,m;
  ll res=0;
  cin>>n>>m;
  cnt[0]=1;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	a[i]=a[i-1]+a[i];
	res+=cnt[a[i]%m];
	cnt[a[i]%m]++;
}
cout<<res;
  return 0;
}



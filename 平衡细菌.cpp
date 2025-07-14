#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=200010;
int n;
ll a[N],b[N],c[N];
int main()
{
  scanf("%d",&n);
  for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
  for(int i=1;i<=n;i++) b[i]=a[i]-a[i-1];
  for(int i=1;i<=n;i++) c[i]=b[i]-b[i-1];
  ll res=0;
  for(int i=1;i<=n;i++)
  res+=abs(c[i]);
  
  printf("%lld",res); 
  return 0;
}


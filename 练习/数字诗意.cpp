#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int main()
{
  ll x,n,ans=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>x;
      if((x&-x)==x) ans++;
  }
  cout<<ans;
  return 0;
}

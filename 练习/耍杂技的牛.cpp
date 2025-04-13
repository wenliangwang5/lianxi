#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=500010,M=1010;
int n;
vector<pair<ll,int>> x;
ll a[N],b[N],wei,res;
int main()
{
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	cin>>a[i]>>b[i];
  	ll p=a[i]+b[i];
  	x.push_back({p,i});
  }
  sort(x.begin(),x.end());
  res=-1e9;
  for(int i=0;i<n;i++)
  {
  	res=max(res,wei-b[x[i].second]);
  	wei+=a[x[i].second];
  }
  
  cout<<res;
  return 0;
}



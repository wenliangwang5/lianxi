#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=1000010;


int main()
{
  int n;
  cin>>n;
  vector<int> a(n+10);
  vector<int> v(n),cnt(n);
  ll sum=0,ans=0;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  	cnt[a[i]]++;
  	if(cnt[a[i]]==2) sum++;
  }
  
  for(int i=1;i<=n;i++)
  {
  	if(--cnt[a[i]]==1) sum--;
  	if(!v[a[i]]) ans+=(sum-(cnt[a[i]]>=2)),v[a[i]]=1;
   } 
   
   cout<<ans<<endl;
   
  return 0;
}


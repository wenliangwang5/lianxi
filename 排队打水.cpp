#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll a[N],s[N],ans; 
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  
  sort(a+1,a+1+n);
  
  for(int i=1;i<=n;i++)
  {
  	s[i]=s[i-1]+a[i];
  	ans+=s[i-1];
  }
  cout<<ans;
  return 0;
}



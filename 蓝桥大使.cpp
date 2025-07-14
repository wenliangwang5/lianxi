#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
vector<PII> z;
ll n,a[N],b[N],s[N],res;
int main()
{
  cin>>n;
  int o[n+1];
  memset(o,0,sizeof o);
  for(int i=1;i<=n;i++) 
  {
  	cin>>a[i]>>b[i];
  	s[i]=a[i]-b[i];
  	z.push_back({s[i],i});
  }
  sort(z.begin(),z.end());
  for(int i=z.size()-1;i>=z.size()-(n/2);i--)
  {
  	o[z[i].second]=1;
  }
  for(int i=1;i<=n;i++)
  {
  	if(o[i]==1) res+=a[i];
  	else res+=b[i];
  }
  
  cout<<res;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int n,ans,tem=1;
int a[N],s[N]; 
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) {
  	cin>>a[i];
  }
  
  if(n<=2) cout<<2<<endl;
  
  for(int i=2;i<=n;i++)
  {
  	s[i]=a[i]-a[i-1];
  }
  int tc=s[2];
  for(int i=3;i<=n;i++)
  {
  	if(tc==s[i]) tem++;
	 else {
	 	ans=max(tem,ans);
	 	tc=s[i];
	 	tem=1;
	 } 
  }
  cout<<ans+1;
  return 0;
}



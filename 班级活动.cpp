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
int a[N];
int st[N];
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) 
  {
  	int x;
  	cin>>x;
  	st[x]++;
  }
  int ans=0,ans1=0;
  for(int i=1;i<=N;i++)
  {
  	if(st[i]>2) {
  		ans+=(st[i]-2);
	  } 
	  if(st[i]==1) ans1++;
  }
  if(ans>=ans1) cout<<ans<<endl;
  else cout<<ans+(ans1-ans)/2<<endl;;
  return 0; 
}



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
const int N=100010,M=1010;
ll max1;
ll a[N],s[N],w[N];
int n;
int main()
{
  int n; 
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  	s[i]=s[i-1]+a[i];
  }
  
  for(int i=1;i<=n;i++)
  {
  	if(i<=10) w[i]=s[i];
  	else{
  		w[i]=s[i]-s[i-10];
	  }
	  
	  max1=max(max1,w[i]);
  }
  cout<<max1;
  return 0;
}



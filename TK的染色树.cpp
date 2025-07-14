#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int n;
int a[N];
int d[N]; 
int main()
{
  cin>>n;
  int min1=1e9+7;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  	if(a[i]<min1) min1=a[i];
  }
  for(int i=1;i<n;i++)
  {
  	int x,y;
  	cin>>x>>y;
  	d[x]++;
  	d[y]++;
  }
  ll  sum=0,cnt=0;
  for(int i=1;i<=n;i++)
  {
  	if(d[i]<=1) {
  		sum+=a[i];
  		cnt++;
	  }
  }
  if(cnt%2==0) cout<<sum;
  else cout<<sum+min1;
  return 0;
}



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
ll n,ans;
ll js,os;
ll a[N];
ll sum;
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) {
  	cin>>a[i];
  	if(a[i]%2==0) os++;
  	else js++;
  	
  	sum+=a[i];
  }
  int mm;
  if(sum%2==0) mm=0;
  else mm=1; 
  
  if(mm==1) cout<<0<<endl;
  else{
  	ll t=0;
  	t+=os*(os-1)/2;
  	t+=js*(js-1)/2;
  	cout<<t+os*js<<endl;
  }
  return 0;
}



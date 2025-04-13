#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,k;
int a[N],sum;
int main()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++) 
  {
  	cin>>a[i];
  	sum+=a[i];
  }
  while(k--)
  {
  	int x,y;
  	cin>>x>>y;
  	if((y-x+1)%2==0) sum-=(y-x+1)/2;
  	else sum+=(y-(y-x+1)/2);
  	
  }
  cout<<sum;
  return 0;
}



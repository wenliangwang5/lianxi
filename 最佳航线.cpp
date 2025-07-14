#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,ans;
int a[N];
//priority_queue<PII,vector<PII>> p;
int main()
{
  cin>>n;
  for(int i=1;i<n;i++) {
  cin>>a[i];
  }
  a[n]=1e9;
  int idx=1,max1=1;
  while(idx<n)
  {
  	for(int i=idx+1;i<=a[idx];i++) {
  		if(a[i]>a[max1]) max1=i;
	  }
	
	idx=max1;
	ans++;
  	
  }
  
 cout<<ans;
  return 0;
}



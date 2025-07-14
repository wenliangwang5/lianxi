#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m,ans;
int a[N];
int solve(int x)
{
	int sum=0,idx=0;
	
		for(int i=0;i<n;i++)
		{
			if(x>>i&1) sum+=a[i];
		 
		}
		
	if(sum==m)  ans++;
} 
int main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  
  for(int i=0;i<1<<4;i++)
  {
  	solve(i);
  }
  cout<<ans;
  return 0;
}



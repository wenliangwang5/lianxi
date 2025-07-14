#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,v;
int dp[M][M],v1[N],w[N]; 
int main()
{
  cin>>n>>v;
  for(int i=1;i<=n;i++){
  	cin>>v1[i]>>w[i];
  }
  for(int i=1;i<=n;i++)
  {
  	for(int j=0;j<=v;j++)
  	{
  		dp[i][j]=dp[i-1][j];
  		if(j>=v1[i]) dp[i][j]=max(dp[i][j],dp[i-1][j-v1[i]]+w[i]);
	  }
  }
  cout<<dp[n][v];
  return 0;
}



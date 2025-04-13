#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
ll b[N],ans;
int n,m,k;
int a[M][M],s[M][M];
int main()
{
  cin>>n>>m>>k;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		cin>>a[i][j];
  		s[i][j]=s[i-1][j]+a[i][j];
	  }
  }
  for(int l1=1;l1<=n;l1++)
  {
  	for(int l2=l1;l2<=n;l2++)
  	{
  		for(int r1=1,r2=1,S=0;r2<=m;r2++)
  		{
  			S+=s[l2][r2]-s[l1-1][r2];
  			while(S>k)
  			{
  				S-=s[l2][r1]-s[l1-1][r1];
  				r1+=1;
			  }
  			ans+=r2-r1+1;
		  }
	  }
  }
  cout<<ans;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int f[M][M];
string a,b;

int main()
{
  cin>>n>>m;
  cin>>a>>b;
  a=' '+a;
  b=' '+b;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		f[i][j]=max(f[i-1][j],f[i][j-1]);//先考虑不完全匹配的情况 
  		if(a[i]==b[j]) f[i][j]=(f[i][j],f[i-1][j-1]+1);//在判断有匹配情况时的最大值 
	  }
  }
  cout<<f[n][m];
  return 0;
}



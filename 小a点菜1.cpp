#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int a[N]; 
int f[M][M];
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++) cin>>a[i];
   
   for(int i=1;i<=n;i++)
   for(int j=1;j<=m;j++)
   {
   	if(j==a[i]) f[i][j]=f[i-1][j]+1;
   	if(j>a[i]) f[i][j]=f[i-1][j]+f[i-1][j-a[i]];
   	if(j<a[i]) f[i][j]=f[i-1][j];
   	
   }
   
  cout<<f[n][m];
  return 0;
}



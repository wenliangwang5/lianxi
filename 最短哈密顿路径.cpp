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

const int N=20,M=1<<20;
int n;
int f[M][N],w[N][N];

int main()
{
 cin>>n;
 for(int i=0;i<n;i++)
 {
 	for(int j=0;j<n;j++)
 	{
 		cin>>w[i][j];
	 }
 }
 memset(f,0x3f,sizeof f);
 f[1][0]=0;
 for(int i=0;i<1<<n;i++)
 {
 	for(int j=0;j<n;j++)
 	{
 		if(i>>j&1) 
 		for(int k=0;k<n;k++)
 		{
 			if(i-(1<<j)>>k&1)
 			{
 				f[i][j]=min(f[i][j],f[i-(1<<j)][k]+w[k][j]);
			 }
		 }
	 }
 }cout<<f[(1<<n)-1][n-1]<<endl;
  return 0;
}



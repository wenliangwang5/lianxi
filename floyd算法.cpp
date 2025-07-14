#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m,k;
int d[M][M];
int INF=1e9;
void floyd()
{
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
 } 
int main()
{ 
  cin>>n>>m>>k;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=n;j++)
  	{
  		if(i==j) d[i][j]=0;
  		else d[i][j]=INF;
	  }
  }
  while(m--)
  {
  	int a,b,w;
  	cin>>a>>b>>w;
  	d[a][b]=min(d[a][b],w);
  }
  floyd();
  while(k--)
  {
  	int a,b;
  	cin>>a>>b;
  	if(d[a][b]>INF/2) cout<<"impossible"<<endl;
  	else cout<<d[a][b]<<endl;
  }
  return 0;
}



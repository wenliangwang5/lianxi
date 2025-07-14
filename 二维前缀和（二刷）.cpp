#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1010;
int n,m,q;
int a[N][N],s[N][N];
int main()
{
  cin>>n>>m>>q;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		cin>>a[i][j];
	  }
  }
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];//构造二维前缀和数组
		  //左边区域加上右边区域减去两边重合区域再加上本位数据 
	  }
  }
  
  while(q--)
  {
  	
  	int x1,y1,x2,y2;
  	cin>>x1>>y1>>x2>>y2;
  	cout<<s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1]<<endl;
  }
  return 0;
}


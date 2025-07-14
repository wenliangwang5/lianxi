#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1010;
int n,m,q;
int a[N][N],b[N][N];
void insert(int x1,int y1,int x2,int y2,int c)
{
	b[x1][y1]+=c;//本位插入数值 此位置之下等于都加上了此数 
	b[x1][y2+1]-=c;//右边部分不需要此数，减去即可 
	b[x2+1][y1]-=c;//左边部分也不需要此数，减去即可 
	b[x2+1][y2+1]+=c;//两部分有重复的，多减去了，再加上一次即可 
}
int main()
{
   scanf("%d%d%d",&n,&m,&q);
   for(int i=1;i<=n;i++)
   {
   	for(int j=1;j<=m;j++)
   	{
   		scanf("%d",&a[i][j]);
   		
	   }
	 }  
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)  
  	insert(i,j,i,j,a[i][j]);//处理为差分数组 
  	
  }
  
  while(q--)//操作处理 
  {
  	int x1,y1,x2,y2,c;
  	cin>>x1>>y1>>x2>>y2>>c;
  	
  	insert(x1,y1,x2,y2,c);
  	
  }
  
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		b[i][j]+=b[i-1][j]+b[i][j-1]-b[i-1][j-1];//差分数组复原 本位加左边区域加上右边区域，减去两区域重复的地方 
  		
	  }
  }
  
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	{
  		printf("%d ",b[i][j]);
	  }
	  
	  puts(" ");
  }
  return 0;
}


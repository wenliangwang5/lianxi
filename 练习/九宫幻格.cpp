#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int a[4][4],n,cnt;
int b[10],a1[3][3];
pair<int,int> p[10];
bool check()
{
	int h1=a[1][1]+a[2][2]+a[3][3];
	if(h1!=a[1][3]+a[2][2]+a[3][1]) return false;
	for(int i=1;i<=3;i++)
	{
		int h=0,l=0;
		for(int j=1;j<=3;j++)
		{
			h+=a[i][j];
			l+=a[j][i];
		}
		if(h!=h1||l!=h1) return false; 
  }
	
	return true;
 } 
 void print()
 {
 	for(int i=1;i<=3;i++)
 	{
 		for(int j=1;j<=3;j++)
 		{
 			cout<<a1[i][j]<<" ";
		 }
		 puts("");
	 }
 }
 void dfs(int c)
 {
	if(c>n) 
	{
		if(check()) 
		{
			cnt++;
			for(int i=1;i<=3;i++)
			{
				for(int j=1;j<=3;j++) a1[i][j]=a[i][j];
			}
		}
	 return ;
	}
	int x=p[c].first;
	int y=p[c].second;
	for(int i=1;i<=9;i++)
	{
		if(b[i]) continue;
		a[x][y]=i;
		b[i]=1;
		dfs(c+1);
		a[x][y]=0;
		b[i]=0;
	}
 }
 int main()
{
	
  for(int i=1;i<=3;i++)
  {
  	for(int j=1;j<=3;j++) 
  	{
  		cin>>a[i][j];
  		b[a[i][j]]++;
  		if(a[i][j]==0) 
  		{
  			n++;
  			p[n]={i,j};
		  }
	  }
  }
  
  dfs(1);
  if(cnt==1) print();
  else cout<<"Too Many"<<'\n';
  return 0;
}



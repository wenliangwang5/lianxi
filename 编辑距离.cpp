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
const int N=200010,M=1010;
int n,m;
int f[M][M];
char st[M][M];
int solv(char a[],char b[])
{
	int la=strlen(a+1),lb=strlen(b+1);
	for(int i=0;i<=lb;i++) f[0][i]=i;
	for(int i=0;i<=la;i++) f[i][0]=i;
	
	for(int i=1;i<=la;i++)
	{
		for(int j=1;j<=lb;j++)
		{
			f[i][j]=min(f[i-1][j],f[i][j-1])+1;
			f[i][j]=min(f[i][j],f[i-1][j-1]+(a[i]!=b[j]));
		}
	}
	return f[la][lb];
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++) scanf("%s",st[i]+1);
  
  while(m--)
  {
  	char s[N];
  	int limit;
  	scanf("%s%d",s+1,&limit);
  	int res=0;
  	for(int i=1;i<=n;i++)
  	{
  		if(solv(st[i],s)<=limit) 
  		res++;
	  }
	  cout<<res<<endl;
  }
  
  return 0;
}



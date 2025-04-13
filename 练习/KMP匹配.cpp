#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=1000100,M=1010;
int n,m;
char p[N],s[N];
int ne[N];
int main()
{
  cin>>n>>p+1>>m>>s+1;
  for(int i=2,j=0;i<=n;i++)
  {
  	while(j&&p[i]!=p[j+1]) j=ne[j];
  	
  	if(p[i]==p[j+1]) {
  		j++;
	  }
	  ne[i]=j;
  }
  
  for(int i=1,j=0;i<=m;i++)
  {
  	while(j&&s[i]!=p[j+1]) j=ne[j];
  	
  	if(s[i]==p[j+1]) j++;
  	
  	if(j==n)
  	{
  		cout<<i-j<<" ";
  		j=ne[j];
	  }
  	
  	
  }
  return 0;
}



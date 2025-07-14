#include<bits/stdc++.h>
#include<iostream>
typedef long long ll;
const int N=100010;
using namespace std;

int n,m;
int p[N];
int find(int x)
{
  if(p[x]!=x) p[x]=find(p[x]);
  
  return p[x];
	}
int main()
{
 cin.tie(0);
 cout.tie(0);
 ios::sync_with_stdio(0);
 
 scanf("%d%d",&n,&m);
 for(int i=1;i<=n;i++) p[i]=i;
 while(m--)
 {
 	char op[2];
    int a,b;
    scanf("%s%d%d",op,&a,&b);
 
    if(op[0]=='M') p[find(a)]=find(b);
     else {
 	   if(find(a)==find(b)) printf("Yes\n");
 	   else printf("No\n");
      }
  } 
  return 0;
}


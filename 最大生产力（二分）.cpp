#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=200010;
int n,m;
int c[N],t[N]; 
int main()
{
  scanf("%d%d",&n,&m);
  for(int i=0;i<n;i++) scanf("%d",&c[i]);
  for(int i=0;i<n;i++) scanf("%d",&t[i]),c[i]=c[i]-t[i];
  sort(c,c+n);
  while(m--)
  {
  	int v,s;
  	scanf("%d%d",&v,&s);
  	int l=0,r=n;
  	while(l<r)
  	{
  		int mid=l+r>>1;
  		if(c[mid]>s) r=mid;
  		else l=mid+1;
	  }
  	if(n-l>=v) puts("YES");
  	else puts("NO");
  	
   } 

  return 0;
}



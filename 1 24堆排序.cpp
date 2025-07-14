#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
typedef long long ll;
const int N=100010;
int n,m,size1;
int h[N];

using namespace std;
void down(int u)
{
	int t=u;
	if(u*2<=size1&&h[u*2]<h[t]) t=u*2;
	if(u*2+1<=size1&&h[u*2+1]<h[t]) t=u*2+1;
	if(t!=u)
	{
		swap(h[u], h[t]);
		down(t);
	}
	
}
int main()
{
 cin.tie(0);
 cout.tie(0);
 ios::sync_with_stdio(0);
 scanf("%d%d",&n,&m);
 for(int i=1;i<=n;i++)  scanf("%d",&h[i]);
 
 size1=n;
 for(int i=n/2;i;i--) down(i);
 while(m--)
 {
 	printf("%d ",h[1]);
 	h[1]=h[size1];
	size1--;
	down(1);
 	
 }
  return 0;
}


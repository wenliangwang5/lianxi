#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=1010;
int a[N][N],b[N][N],c[N][N];
int x,y,z,n,q;
int res;

int main()
{

  cin>>n>>q;
  while(q--)
  {
  	cin>>x>>y>>z;
  	a[x][y]++;
  	b[x][z]++;
  	c[y][z]++;
  	if(a[x][y]>=n) res++;
	if(b[x][z]>=n) res++;
	if(c[y][z]>=n) res++;
	
	printf("%d\n",res);
   }
  return 0;
}


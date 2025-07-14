#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=100010;
int h[N],e[N],ne[N],idx;

void insert (int x)
{
	int k=(x%N+N)%N;
	e[idx]=x;
	ne[idx]=h[k];
	h[k]=idx++;
}

bool find(int x)
{
	int k=(x%N+N)%N;
	for(int i=h[k];i!=-1;i=ne[i])
	{
		if(e[i]==x)
		return true;
		
	}
		return false;
}
int main()
{
 cin.tie(0);
 cout.tie(0); 
 ios::sync_with_stdio(0);
 int n;
 scanf("%d",&n);
 memset(h,-1,sizeof h);
 while(n--)
 {
 	char op[2];
 	int x;
 	scanf("%s%d",op,&x);
 	
 	if(*op=='I') insert(x);
 	else {
 		if(find(x)) puts("Yes");
 		else puts("No");
	 }
 }
  return 0;
}


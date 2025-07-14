#include<bits/stdc++.h>
#include<iostream>
typedef long long ll;
const int N=100010,M=3000000;
int a[N];
int n;
int son[M][2],idx;
using namespace std;

void insert(int x)
{
	
	int p=0;
	for(int i=30;i>=0;i--)
	{
		int &s=son[p][x>>i&1];
		if(!s) s=++idx;
		p=s;
		
	}
}

int query(int x)
{
	int res=0,p=0;
	for(int i=30;i>=0;i--)
	{
		int s=x>>i&1;
		if(son[p][!s])
		{
			res+=1<<i;
			p=son[p][!s];
		}
		else p=son[p][s]; 
	}
	
	return res;
}
int main()
{
 cin.tie(0);
 cout.tie(0);
 ios::sync_with_stdio(0);
 cin>>n;
 for(int i=0;i<n;i++) 
 {
 	cin>>a[i];
 	insert(a[i]);
 }
 
 int res=0;
 for(int i=0;i<n;i++) res=max(res,query(a[i]));
 
 cout<<res;
  return 0;
}


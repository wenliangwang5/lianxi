#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int n,m;
int a[N],b[N]; 

void insert(int l,int r,int c)
{
	b[l]+=c;
	b[r+1]-=c;
	return;
	
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++) 
  {
  	cin>>a[i];
  	insert(i,i,a[i]);
  }
  while(m--)
  {
  	int l,r,c;
  	scanf("%d%d%d",&l,&r,&c);
  	insert(l,r,c);
  }
  for(int i=1;i<=n;i++) b[i]+=b[i-1];
  
  for(int i=1;i<=n;i++) printf("%d ",b[i]);
  
  return 0;
}



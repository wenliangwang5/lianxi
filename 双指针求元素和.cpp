#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int n,m,x;
int a[N],b[N];
  
int main()
{
  cin>>n>>m>>x;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int j=0;j<m;j++) cin>>b[j];
  
  for(int i=0,j=m-1;i<n;i++)
  {
  	while(a[i]+b[j]>x) j--;
  	
  	if(a[i]+b[j]==x)
  	{
  		printf("%d %d\n",i,j);
  		break;
	  }
  }

  return 0;
}



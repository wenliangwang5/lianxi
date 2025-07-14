#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=110;
int a[N];
bool b[N]; 
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;i++) a[i]=i;
  int num=n;
  int idx=1;
  while(num!=1)
  {
    int p=0;
    while(b[idx%n]) idx++ ;
  	while(!b[(idx)%n]&&p<2) 
  	{
  		idx++;
  		p++;
  		while(b[idx%n]) idx++ ;
	  }
    
    
  	if(p==2)
  	{
  		if(idx%n==0) 
  		{
  			b[10]=true;
		  }
  	
	    else 
	  	b[(idx)%n]=true;
  	
  		num--;
	  }
  	
  }

for(int i=1;i<=n;i++)
{
	if(!b[i]) cout<<i<<" ";
}

  return 0;
}


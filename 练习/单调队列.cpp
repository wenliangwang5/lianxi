#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=1000010,M=1010;
int n,k,a[N],b[N],q[N];
int hh=1,tt=0;
int main()
{
	IOS
  cin>>n>>k;
  for(int i=1;i<=n;i++) cin>>a[i];
  
  for(int i=1;i<=n;i++)
  {
  	if(hh<=tt&&q[hh]<i-k+1) hh++;
  	
  	while(hh<=tt&&a[q[tt]]>=a[i]) tt--;
  	
  	q[++tt]=i;
  	
  	if(i>=k) cout<<a[q[hh]]<<" "; 
  	
  }
    cout<<endl;
    
  	hh=1,tt=0;
  	for(int i=1;i<=n;i++)
  	{
  		if(hh<=tt&&q[hh]<i-k+1) hh++;
  		
  		while(hh<=tt&&a[q[tt]]<=a[i]) tt--;
  		
  		q[++tt]=i;
  		
  		if(i>=k) cout<<a[q[hh]]<<" ";
  		
	  }
  	
  
  return 0;
}



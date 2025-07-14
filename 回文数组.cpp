#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int a[N];
int b[N];
ll res;
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  
  for(int i=1;i<=n/2;i++) 
  {
  	b[i]=a[i]-a[n-i+1];
  }
  
  for(int i=1;i<=n/2;)
  {
  	res+=abs(b[i]);
  	if((b[i]>0&&b[i+1]>0)||(b[i]<0&&b[i+1]<0))
  	{
  		if(abs(b[i])>abs(b[i+1]))
  		{
  			i+=2;
		  }
		  else{
		  	b[i+1]-=b[i];
		  	i+=1;
		  }
	  }
	  else {
	  	i+=1;
	  }
  }
  cout<<res;
  return 0;
}



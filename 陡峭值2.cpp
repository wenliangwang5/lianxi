#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=110;
int n;
int a[N];
int main()
{
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  sort(a,a+n);
  int res=0;
  for(int i=0;i<n-1;i++)
  {
  	res+=abs(a[i+1]-a[i]);
  }
  bool flag=true;
  for(int i=0;i<n-1;i++)
  {
  	if(a[i]!=a[i+1]) 
  	{
  		flag=false;
  		break;
	  }
  }
  if(flag) cout<<"1"<<" ";
  else cout<<"2"<<" ";
  cout<<res;
  
  return 0;
}



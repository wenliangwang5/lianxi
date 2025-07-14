#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int n;
 
int main()
{
  int ans=0;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0,j=0;i<n;i++)
  {
  	if(s[i]=='y') ans++; 
  	else 
  	{
  		j=i;
  		while(s[++j]=='n') 
  		
  		ans+=(j-i)/2;
  		i=j;
	  }
  	
  }
 cout<<ans;
  return 0;
}


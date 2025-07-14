#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int main()
{
  vector<string> a;
  string s,b,ans; 
  int n;
  cin>>n;
  for(int i=0;i<n;i++) 
{
	cin>>s;
	a.push_back(s);
}
  cin>>b;
  int i=0,j=0;
  while(j<=b.size()-1)
  {
  	if(b[i]==b[j])
  	{
  		j++;
  		
	  }
	  else if(b[i]!=b[j]&&b[j]==b[j+1])
	  {
	  	int x=j-i;
	  	ans=ans+a[x%n];
	  }
	  else if(b[i]!=b[j]&&b[j]!=b[j+1])
	  {
	  	ans=ans+b[j];
	  	i=j+1;
	  	j++;
	  }
  }
  
  cout<<ans;
  return 0;
}


#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
string s; 
int main()
{
  cin>>n;
  int end=4*n-4,beg=-1;
  for(int i=1;s.length()<end;i++)
  {
  	s+=to_string(i);
  }
  for(int i=1;i<n;i++){
  	
  	for(int j=1;j<i+n;j++)
  	{
  		if(j==n-i+1) cout<<s[++beg];
  		else if(j==n+i-1) cout<<s[--end];
  		else cout<<'.';
  		
	  }
	  cout<<endl;
  }
  for(int i=1;i<2*n;i++)
  {
  	cout<<s[++beg];
  }

  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
vector<int> div(vector<int> A,int b,int &r)
{
	vector<int> c;
	for(int i=A.size()-1;i>=0;i--)
	{
		r=r*10+A[i];
		c.push_back(r/b);
		r%=b;
		
	} 
	reverse(c.begin(),c.end());
	while(c.back()==0&&c.size()>1) c.pop_back();
	
	return c;
	
	
}

int main()
{
  string s;
  cin>>s;
  int b;
  cin>>b;
  int r=0;
  vector<int> A;
  for(int i=s.size()-1;i>=0;i--) A.push_back(s[i]-'0');
  
  
  auto c=div(A,b,r);
  
  
  for(int i=c.size()-1;i>=0;i--) printf("%d",c[i]);
  cout<<'\n'<<r;
  return 0;
}



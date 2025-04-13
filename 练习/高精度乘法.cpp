#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
vector<int> mul(vector<int> A,int b)
{
	vector<int> c;
	int t=0;
	for(int i=0;i<A.size()||t;i++)
	{
		if(i<A.size()) t+=A[i]*b;
		c.push_back(t%10);
		t/=10;
		
	}
    return c;	
}

int main()
{
  string s;
  int b;
  cin>>s>>b;
  vector<int> A;
  for(int i=s.size()-1;i>=0;i--) A.push_back(s[i]-'0');
  
  auto c=mul(A,b);
  
  for(int i=c.size()-1;i>=0;i--) printf("%d",c[i]);

  return 0;
}



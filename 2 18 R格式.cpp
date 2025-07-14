#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=100010;
void mul(vector<int> &A,int b)
{
	int t=0;
	for(int i=0;i<A.size();i++)
	{
		t+=A[i]*b;
		A[i]=t%10;
		t/=10;
	}
	
	if(t) A.push_back(t);
}
void add(vector<int> &A,int k,int b)
{
	int t=b;
	for(int i=k;i<A.size();i++)
	{
		t+=A[i];
		A[i]=t%10;
		t/=10;
		
	}
	if(t) A.push_back(t); 
}
int main()
{
  int n;
  string d;
  cin>>n>>d;
  reverse(d.begin(),d.end());
  int dot=d.find('.');
  vector<int> D;
  for(auto c:d)
     if(c!='.')
	     D.push_back(c-'0');
		 
		 while(n--) mul(D,2);
		 
		 if(D[dot-1]>=5) add(D,dot,1);
		 for(int i=D.size()-1;i>=dot;i--)
		      cout<<D[i];
			  
			   
   
  return 0;
}


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=100010;
bool is_prim(int n)
{
	if(n<2) return false;
	for(int i=2;i<=n/i;i++)
	{
		if(n%i==0) return false;
	}
	return true;
	
 } 

int main()
{
  int n;
  cin>>n;
  while(n--)
  {
  	 int a;
  	 cin>>a;
  	 if(is_prim(a)) cout<<"Yes"<<endl;
	   else cout<<"No"<<endl;
  }
  

  return 0;
}


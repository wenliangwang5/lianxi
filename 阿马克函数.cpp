#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int  A(int m,int n)
{
	if(m==0) {
		return n+1;
	}
	if(m>0&&n==0)
	{
	  return A(m-1,1);
	}
	if(m>0&&n>0)
	{
		return A(m-1,A(m,n-1));
		
	}
}
int main()
{
 cin>>m>>n;

  cout<<A(m,n);
  return 0;
}



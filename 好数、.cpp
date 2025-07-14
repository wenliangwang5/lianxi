#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
bool solve(int x)
{
	int k=1;
	while(x)
	{
		int t=x%10;
		if(t%2!=k%2) return false;
		x/=10;
		k++; 
	}
	return true;
}
int main()
{
  int n,res=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	if(solve(i)) res++;
  	
  }
  cout<<res;
  return 0;
}



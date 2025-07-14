#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int check2(int x)
{
	int p=0;
	while(x)
	{
		p+=x&1;
		x=x>>1;
	}
	return p;
}
int check4(int x)
{
	int s=0;
	vector<int>p;
	while(x)
	{
		p.push_back(x%4);
		x/=4;
	}
	for(auto z:p) s+=z;
	
	return s;
}
int main()
{
  int ans=0;
  for(int i=1;i<=2024;i++)
  {
  	if(check2(i)==check4(i)) ans++;
  }
  cout<<ans;
  return 0;
}



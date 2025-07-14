#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
string s;

void solve()
{
	cin>>s;
	cout<<(s.back()=='0'?"E" : "B")<<'\n';
	
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	solve();
  }

  return 0;
}


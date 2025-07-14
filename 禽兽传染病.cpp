#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll x,n,num=1;
void solve()
{
   num=num*x+num;//每一轮感染的数目是增加的加上初始的即可 
}
int main()
{ 
  cin>>x>>n;

  while(n--)
  {
  	solve();
	}  
 cout<<num;
  return 0;
}



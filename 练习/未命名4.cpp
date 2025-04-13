#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int n;
int lowbit(int x)
{
	return x&-x;
}
int main()
{
  cin>>n;
  while(n--)
  {
  	int res=0,x;
  	cin>>x;
  	while(x) x-=lowbit(x),res++;
  	
  	cout<<res<<" ";
  }
  
  return 0;
}



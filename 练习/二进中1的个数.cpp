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
  	int res=0;
  	int a;
  	scanf("%d",&a);
  	while(a) a-=lowbit(a),res++;
  	cout<<res<<" ";
  }

  return 0;
}



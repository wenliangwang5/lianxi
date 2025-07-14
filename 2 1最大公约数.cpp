#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=100010;
int gcd(int a,int b)
{
	return b? gcd(b,a%b): a;
}

int main()
{
  int n;
  cin>>n;
  while(n--)
  {
  	int a,b;
     scanf("%d%d",&a,&b);
	  printf("%d\n",gcd(a,b));
  }

  return 0;
}


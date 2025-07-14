#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=100010;
int prims[N],cnt;
bool st[N];

void get_primes(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(!st[i])
		{
			prims[cnt++]=n;
				for(int j=i+i;j<=n;j+=i) st[j]=true;
		}
	
	}
}
int main()
{
  int n;
  cin>>n;
  get_primes(n);
  cout<<cnt<<endl;

  return 0;
}


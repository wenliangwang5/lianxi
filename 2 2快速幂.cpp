#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=100010;
int qmi(int a,int k,int p)
{
	int res=1; 
	while(k)
	{
		if(k&1) res=(ll)res*a%p;
		k>>=1;
		a=(ll)a*a%p;
	}
	return res;
	
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,k,p;
		scanf("%d%d%d",&a,&k,&p);
		printf("%d\n",qmi(a,k,p));
	}
 

  return 0;
}


#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
bool check(int x)
{
	for(int i=2;i<=x/i;i++)
	{
		if(x%i==0) return false;
    }
    return true;
}

int main()
{
  int x;
  while(1)
  {
  	cin>>x;
  	printf("%d %d\n",x,check(x));
  	
  }

  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int ans;
int solve(int x)
{
	int idx=1;
	while(x)
	{
		int t=x%10;
		if(idx==1&&t%2!=0)
		{
			idx=2;
			x/=10; 
			continue;
		}else if(idx==2&&t%2==0)
		{
			idx=1;
			x/=10;
		}
		else 
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
  int n;
  cin>>n; 
   for(int i=1;i<=n;i++)
   {
   	if(solve(i)) ans++;
   }
   
   cout<<ans;
  return 0;
}


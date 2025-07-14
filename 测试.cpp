#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std; 
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll ans,mod1=1e12;

int main()
{
	IOS
	ll fac=1,res=0;
	for(int i=1;i<=100;i++)
	{
		fac=(fac*i)%mod1;
		res=(res+fac)%mod1;
		cout<<res<<endl;;
	}
	return 0;
}

#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll a[N];
int t,tt,pp;
void qu_push(ll x)
{
	a[tt++]=x;
}
void qu_pop()
{
	pp++;
}
void qu_empty()
{
	if(tt==pp) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

void qu_query()
{
	cout<<a[pp]<<endl;
}
int main()
{
    tt=pp=1;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s=="push")
		{
			ll x;
			cin>>x;
			qu_push(x);
		}
		else if(s=="empty") qu_empty();
		else if(s=="query") qu_query();
		else qu_pop();
	}


  return 0;
}



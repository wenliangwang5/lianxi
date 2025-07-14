#include<bits/stdc++.h>
#include<iostream>
typedef long long ll;
using namespace std;
ll a[100010];
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
 tt=1;
 pp=1;
 cin.tie(0);
 cout.tie(0);
 ios::sync_with_stdio(0);
  cin>>t;
  while(t--)
  {
  	string s;
  	ll x;
  	cin>>s;
  	if(s=="push") {
  		cin>>x; 
  		qu_push(x);
	  }
  	else if(s=="empty") qu_empty();
  	else if(s=="query") qu_query();
  	else qu_pop();
  }
  return 0;
}


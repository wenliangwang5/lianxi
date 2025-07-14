#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
string s;
int a[N],n,q[N];
ll res;
vector<int> x;
int main()
{
  cin>>s;
  for(int i=s.size()-1;i>=0;i--)
  {
  	if(s[i]=='n') n++;
  	else if(s[i]=='a') a[i]=n;
  	else if(s[i]=='l') x.push_back(i);
	else continue;
  	
  }
  for(int i=s.size()-1;i>=0;i--)
  {
  	q[i]=q[i+1]+a[i];
  }
  for(int i=0;i<x.size();i++)
  {
  	res+=q[x[i]];
  }
  cout<<res;
  return 0;
}



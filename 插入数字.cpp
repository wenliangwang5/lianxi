#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll x,k,ans;
int lenth;
unordered_map<string,int> ma;

int main()
{
  cin>>x;
  string s=to_string(x);
  for(int j=0;j<=s.size();j++)
  {
  	if(j==0)
  	{
  		for(int i=1;i<=9;i++) {
  			string p=to_string(i)+s;
  			if(ma[p]==0) ma[p]++,ans++;
	  }
	  }
  	else {
  		for(int i=0;i<=9;i++)
  		{
  			string p=s.substr(0,j)+to_string(i)+s.substr(j,s.size()-j);
  			if(ma[p]==0) ma[p]++,ans++;
		  }
	  }
  }
  cout<<ans;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,ans;
vector<PII> x; 

int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	int l,r;
  	cin>>l>>r;
  	x.push_back({l,r});
  }
  sort(x.begin(),x.end());
  int st=-2e9,en=-2e9;
  for(int i=0;i<n;i++)
  {
  	if(en<x[i].first){
  		if(en==-2e9) {
  				st=x[i].first;
		        en=x[i].second;
		        continue;
		  }
  		ans++;
  		st=x[i].first;
		en=x[i].second;
	  }
	  else if(en<x[i].second)
	  {
	  	en=x[i].second;
	  }
  }
  if(en!=-2e9) ans++;
  cout<<ans;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int b[N];
vector<pair<int,ll>> x;
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	int w;
  	ll s;
  	cin>>w>>s;
  	x.push_back({w,s});
  	b[i]=i;
  }
  ll fen=1e9;
  
  do{
  	ll mfen=0,wei=0;
  	for(int i=1;i<=n;i++)
  	{
  		
  		mfen=max(mfen,wei-x[b[i]-1].second);
  		wei+=x[b[i]-1].first;
	  }
  	fen=min(mfen,fen);
  	
  }while(next_permutation(b+1,b+1+n));
  cout<<fen;
  return 0;
}



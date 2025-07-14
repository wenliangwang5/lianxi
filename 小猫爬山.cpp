#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,x,ans,k;
priority_queue<int,vector<int>> p;
int main()
{

  cin>>n>>k;
  
  for(int i=1;i<=n;i++)
  {
  	cin>>x;
  	p.push(x);
  }
  
  int sum=0; 
  while(p.size())
  {
  	if(sum<k) {
  		int c=p.top();
  		sum+=c;
  		p.pop();
	  }
  	else {
  		sum=0;
  		ans++;
	  }
  }
  if(sum>0) ans++; 
  cout<<ans;
  return 0;
}



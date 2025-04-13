#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int main()
{
  int  n,k,m;
  cin>>n>>k>>m;
  vector<int> p;
  for(int i=1;i<=n;i++) p.push_back(i);
  int idx=(k-1)%n;
  while(p.size())
  {
  	idx=(idx-1+m)%p.size();
  	cout<<p[idx]<<endl;
  	p.erase(p.begin()+idx);
   } 

  return 0;
}



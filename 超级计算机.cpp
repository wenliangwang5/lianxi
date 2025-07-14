#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
vector<PII> x;
int n,a;

int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>a;
  	x.push_back({a,i});
  }
  sort(x.begin(),x.end());
  for(auto z:x) cout<<z.second<<" ";
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
set<int> x;

int main()
{
  x.insert(12);
  x.insert(13);
  x.erase(x.find(12));
  for(auto z: x) cout<<z;

  return 0;
}



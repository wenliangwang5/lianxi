#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
string t;
int main()
{
int ans=0;
string s="while";
  cin>>t;
  for(int i=0;i<5;i++)
  {
  	if(s[i]!=t[i]) ans++;
  }
  cout<<ans;
  return 0;
}



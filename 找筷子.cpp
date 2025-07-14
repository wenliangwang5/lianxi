#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,ans;
int main()
{
	IOS
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	int x;
  	cin>>x;
  	ans^=x;
  }
  
  cout<<ans;
  return 0;
}



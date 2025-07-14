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
const int N=200010,M=1010;
int n,t;

unordered_map<int,unordered_map<int,int>> m;
int main()
{
  cin>>n>>t;
  while(t--)
  {
  	int x,i,j,w;
  	cin>>x;
  	if(x==1)
  	{
  		cin>>i>>j>>w;
  		m[i][j]=w;
	  }
  	else {
  		cin>>i>>j;
  		cout<<m[i][j]<<endl;
	  }
  }

  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int s[N];
int x;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{ 

  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>s[i];
  }
  sort(s+1,s+1+n,cmp);
  for(int i=1;i<=n;i++)
  {
  	cout<<s[i]<<" ";
  }
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int a[N]; 
void solve(int x,int tag)
{
	sort(a+1,a+x);
	if(a[1]<=tag&&a[x]>=tag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl; 
}
int main()
{
  cin>>n;
  while(n--)
  {
  	int x,tag;
  	cin>>x>>tag;
  	for(int i=1;i<=x;i++) cin>>a[i];
  	solve(x,tag);
  }

  return 0;
}



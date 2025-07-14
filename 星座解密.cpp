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
int x,t;
int main()
{
  cin>>x;
  int x1=x;
  while(x1){
  	x1=x1>>1;
  	t++;
  } 
  ll p=pow(2,t)-1;
  ll ans=p-x+1;
  cout<<ans<<endl;
  
  return 0;
}



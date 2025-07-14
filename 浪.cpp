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
int n;
 
int main()
{
  cin>>n;
  ll a=pow(2,n);
  ll b=n*n*n;
  if(a<b) cout<<"A"<<endl;
  else cout<<"B"<<endl;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
double p=1e-6;
int main()
{
  cin>>n;
  double z=n/2.5;
  int z1=n/2.5;
  if(z-z1<p) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

  return 0;
}



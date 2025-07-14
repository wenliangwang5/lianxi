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
int a,b,c,d;
int main()
{
  cin>>a>>b>>c>>d;
  if((b*1.0)/a<=0.2&&(c*1.0)/a<=0.3&&a>=d) cout<<"Accepted"<<endl;
  else cout<<"Rejected"<<endl;

  return 0;
}



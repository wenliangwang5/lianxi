#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int a,b,c;
int main()
{
	cin>>a>>b>>c;
  if(a>b+c) cout<<'l';
  else if(b>a+c) cout<<'q';
  else if(c>a+b) cout<<'b';
  else cout<<-1;

  return 0;
}



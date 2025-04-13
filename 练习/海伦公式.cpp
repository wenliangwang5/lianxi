#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int a,b,c,s; 
bool check(int a,int b,int c)
{
	return (a+b>c)&&(a+c>b)&&(b+c>a);
}
int main()
{
  cin>>a>>b>>c;
  s=(a+b+c)/2;
  int sq=s*(s-a)*(s-b)*(s-c);
  
  
  if(check(a,b,c))cout<<pow(sq,2);
   else cout<<-1;
  return 0;
}



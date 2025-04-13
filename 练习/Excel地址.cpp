#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll a;
int main()
{ 
  cin>>a;
  vector<int> x;
 while(a)
 {
 	a--;
 	x.push_back(a%26);
 	a/=26;
 	
 }
 for(int i=x.size()-1;i>=0;i--) printf("%c",x[i]+'A');
  return 0;
}



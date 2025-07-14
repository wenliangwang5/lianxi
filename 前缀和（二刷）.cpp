#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int a[N],s[N];
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;i++) 
  {
  	cin>>a[i];
  	s[i]=s[i-1]+a[i];//构造前缀和数组 
  }
  while(m--)
  {
  	int x,y;
  	cin>>x>>y;
  	cout<<s[y]-s[x-1]<<endl;
   } 

  return 0;
}


#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int main()
{
  int a[3];
  int ans=0;
  for(int i=0;i<3;i++ ) cin>>a[i];
  for(int i=0;i<2;i++)
  {
  	
  	ans+=abs(a[i]-a[i+1]); 
  }
  if(ans==0) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}



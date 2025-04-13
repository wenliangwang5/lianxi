#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
ll res;
int a[N];
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }
  sort(a+1,a+1+n);
  int mid=a[(n+1)/2];
  for(int i=1;i<=n;i++)
  {
  	res+=abs(a[i]-mid); 
   } 
  cout<<res;
  return 0;
}



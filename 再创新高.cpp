#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int a[N];
int main()
{
  cin>>n;
  int x,res=1;
  for(int i=1;i<=n;i++)
  {
     cin>>a[i];
  }
   x=a[1];
   for(int i=2;i<=n;i++)
   {
     if(a[i]>x) 
     {
       x=a[i];
       res++;
     }
   }

   cout<<res;
  return 0;
}



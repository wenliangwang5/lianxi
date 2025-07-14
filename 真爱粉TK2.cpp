#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,ans,sum;
string x;
int main()
{
  cin>>n;
  cin>>x;
  for(int i=0;i<n;i++)
  {
  	if(x[i]=='5')  sum++;
  }
   
   for(int i=0;i<sum;i++)
   {
   	if(x[i]!='5') ans++; 
   }
   cout<<ans;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
typedef long long ll;
const int N=100010;
ll s[N],x;
int n;
 
int main()
{
  scanf("%d",&n);
  for(int i=1;i<=n;i++) scanf("%d",&x),s[i]=s[i-1]+x;
  ll mins=1e18;
  for(int l1=1;l1<n;l1++)
  {
  	for(int r1=l1;r1<n;r1++)
  	  {
		ll s1=s[r1]-s[l1-1];	
  	  for(int l2=r1+1;l2<=n;l2++)
  	      for(int r2=l2;r2<=n;r2++)
  	      {
  	      	ll s2=s[r2]-s[l2-1];
				mins=min(mins,abs(s1-s2)); 
			}
       }
   }
  printf("%lld",mins);
  return 0;
}



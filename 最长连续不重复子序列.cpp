#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,a[N],s[N];
int ans;
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }
  
  for(int i=1,j=1;i<=n;i++)
  {
  	s[a[i]]++;
  	while(s[a[i]]>1)
  	{
  		s[a[j]]--;
  		j++;
	  }
  	ans=max(ans,i-j+1);
  }
  cout<<ans;
  return 0;
}



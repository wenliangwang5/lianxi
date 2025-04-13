#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int n;
int a[N],s[N];

int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) scanf("%d",&a[i]);
  
  int res=0;
  for(int i=1,j=1;i<=n;i++)
  {
  	s[a[i]]++;
  	while(s[a[i]]>1)
  	{
  		s[a[j]]--;
  		j++;
	  }
  	res=max(res,i-j+1);
  }
  printf("%d",res);
  return 0;
}



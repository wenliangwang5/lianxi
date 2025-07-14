#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int cnt[N],a[N];
vector<int> p[N];
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
   	cin>>a[i];
   	cnt[a[i]]++;
   	m=max(m,a[i]);
   }

  for(int i=1;i<=m;i++)
  {
  	for(int j=i;j<=m;j+=i)
  	{
  		if(cnt[j]) 
  		{
  			for(int k=0;k<cnt[j];k++)
  			p[i].push_back(j);
		  }
	  }
  }
  
  for(int i=m;i>=1;i--)
  {
  	if(p[i].size()>=3)
  	{
  		sort(p[i].begin(),p[i].end());
  		for(int j=0;j<3;j++)
  		{
  			cout<<p[i][j]<<" "; 
		  }
		  return 0;
	  }
  }
  return 0;
}



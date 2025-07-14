#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=200010;
 vector<int> a(N),din(N);
  
ll sum=0,ans;
string s;
ll n,m;
ll dfs(int u)
{
	if(din[u]>1) return 0;
	int next;
	if(s[u]=='L') next=(u-1+n)%n;
	else {
		next=(u+1)%n;
	}
	
	return a[u]+dfs(next);
}
int main()
{
   IOS
   
   cin>>n>>m;
  
   cin>>s;
  
   for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
   
   for(int i=0;i<n;i++)
   {
   	if(s[i]=='L') din[(i-1+n)%n]++;
	   
	else din[(i+1)%n]++; 
   }
   for(int i=0;i<n;i++)
   {
   	if(din[i]==0)
   	{
   		ans+=min(m,dfs(i));
	   }
   }
   
   cout<<sum-ans<<'\n'; 
  return 0;
}


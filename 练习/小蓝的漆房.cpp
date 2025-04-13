#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int t,n,k;
int a[N],b[61];
vector<int> p;

int main()
{  
   IOS
   cin>>t;;
   while(t--)
   {
    cin>>n>>k;
   	int ans=n;
   	
   	for(int i=1;i<=n;i++)
   	{
   		cin>>a[i];
   		if(!b[a[i]]) p.push_back(a[i]);
   		b[a[i]]++;
	   }
   	for(int i=0;i<=p.size()-1;i++)
   	{
   	    int cnt=0;
   	  for(int j=1;j<=n;j++)
		 {
		 	if(a[j]==p[i]) 
		 	{
		 		continue;
			 }
		 	else {
		 		cnt++;
		 		j+=k-1;
			 }
		 }	
     		
   		ans=min(ans,cnt);
	   }
	   cout<<ans<<'\n';
   	
   }
  
  return 0;
}



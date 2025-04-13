#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll n,sum;
int a[N],b[N];
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++) cin>>a[i];
   
   for(int j=1;j<=n/2;j++) b[j]=a[n-j+1]-a[j];
   
   for(int i=1;i<=n/2;i++)
   {
   	if(b[i]>0&&b[i+1]>0) 
   	{
   		if(b[i+1]>b[i]) 
   		{
   		sum+=b[i];
		b[i+1]-=b[i];	
		   }
		else  sum+=b[i],i++;
	   }
	   else if(b[i+1]<0&&b[i]<0)
	   {
	   	if(b[i+1]<b[i]) sum+=abs(b[i]),b[i+1]-=b[i];
	   	else sum+=abs(b[i]),i++;
	   }
	   else sum+=abs(b[i]);
	} 
   cout<<sum;
  return 0;
}



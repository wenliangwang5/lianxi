#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
const int N=500010;
ll a[N],s[N];
int n,t;
ll ans1,ans2;


int main()
{
  scanf("%d",&t);
  while(t--)
  {
  	ans1=0,ans2=0;
  	scanf("%d",&n);
  	for(int i=1;i<=n;i++) 
	{
	scanf("%Ld",&a[i]);
  	s[i]=s[i-1]+a[i];
	}
	int cnt=(n-2)/2;
	int i=1,j=n;
	for(int k=0;k<=cnt;k++)
	{
		ll sum=s[k]+s[n]-s[n-cnt+k];
		if(sum>ans2)
		{
			ans2=sum;
			i=k+1,j=n-cnt+k;
			
		}
	}
	ans1=s[j]-s[i-1];
	printf("%Ld %Ld\n",ans1,ans2);
  }

  return 0;
}


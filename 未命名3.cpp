#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
ll check1(int x)
{
	
	return (x*(1+x))/2;
}
ll check2(int x)
{
	ll sum=1;
	for(int i=1;i<=x;i++) sum*=i;
	
	return sum;
}
int main()
{
  ll a;
  ll ans=0;
  cin>>a;
//  cout<<check1(1);
//  cout<<check2(1);
//  cout<<(check1(1)-check2(1))%100;
  
  for(int i=1;i<=a;i++)
  {
  	if((check1(i)-check2(i))%100==0) 
  	{   
  	    ans++;
  		cout<<i<<endl;
	  }
	  	//if(i==1000||i==2000||i==3000) cout<<"  "<<ans<<endl;
  }
  cout<<ans; 
  return 0;
}



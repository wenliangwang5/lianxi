#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int x,n;
int sum;
int main()
{
	cin>>x>>n;
  if(x<=5) //处理第一星期 
  {
  	sum+=(5-x+1);
  	n-=(sum+2);
  }
  else  n-=(7-x+1);

  sum+=5*(n/7);//中间的完整的 
 
 n=n%7;
  //最后不完整的 
 if(n>5) sum+=5;
 else sum+=n;
 
 cout<<sum*250;
  return 0;
}



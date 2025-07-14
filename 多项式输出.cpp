#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int n;
int b[N];
int main()
{
  cin>>n;
  
  for(int i=1;i<=n+1;i++){
  	cin>>b[i];
  }
  if(n==0) {
  	cout<<b[1];
  	return 0;
  }
  if(b[1]>0)
  {
  	if(b[1]>1) cout<<b[1]<<"x^"<<n;
  	else cout<<"x^"<<n;
  }
  if(b[1]<0)
  {
  	if(b[1]<-1) cout<<b[1]<<"x^"<<n;
  	else cout<<"-"<<"x^"<<n;
  }
  for(int i=2;i<=n-1;i++){
  	
  	if(b[i]>0){
  		if(b[i]>1) cout<<"+"<<b[i]<<"x^"<<n-i+1;
  	    else cout<<"+"<<"x^"<<n-i+1;
	  }
  	if(b[i]<0){
  			if(b[i]<-1) cout<<b[i]<<"x^"<<n-i+1;
  	        else cout<<"-"<<"x^"<<n-i+1;
	  }
  	
  }
  if(b[n]>0){
  		if(b[n]>1) cout<<"+"<<b[n]<<"x";
  	    else cout<<"+"<<"x";
	  }
  	if(b[n]<0){
  			if(b[n]<-1) cout<<b[n]<<"x";
  	        else cout<<"-"<<"x";
	  }
  if(b[n+1]!=0) {
  	if(b[n+1]>0) cout<<"+"<<b[n+1];
  	if(b[n+1]<0) cout<<b[n+1];
  }
  return 0;
}



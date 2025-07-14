#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int n,k;
ll ans;
int a[N];
ll k1[N]; 
string m;

int main()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++) {
  	cin>>a[i];
  	m+="*"+to_string(a[i]);
  }
  ll sum=0,cn=0,idx=n-1;
  ll all=0;
  for(int i=m.size()-1;i>=0;i--)
  {
  	if(m[i]=='5'){
  		cn++;
  		continue;
	  }
	  if(m[i]=='2'){
	  	sum+=cn;
	  	all+=cn;
	  	continue;
	  }
  	 if(m[i]=='*')
  	 {
  	 	//cout<<sum<<" "<<idx<<endl;
  	   k1[idx--]=sum;
	   sum=0;	
	   
	   }
  }
  sort(k1,k1+n);
  for(int i=n-1;i>n-k;i--)
  {
  	all-=k1[i];
  }
  cout<<all;
  return 0;
}



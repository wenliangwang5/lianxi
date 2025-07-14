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
int get(vector<int> num,int l,int r){
	
	int res=0;
	for(int i=l;i>=r;i--)
	{
		res=res*10+num[i];
	}
	return res;
}
int power10(int x)
{
	
	int res=1;
	while(x--) res*=10;
	return  res;
	
}
int count(int n,int x)
{
	if(!n) return 0;
	vector<int> num;
	
	while(n)
	{
	  num.pb(n%10);
	  n/=10;	
		
	}
	n=num.size();
	int res=0;
	for(int i=n-1-!x;i>=0;i--)
	{
		if(i<n-1)
		{
			res+=get(num,n-1,i+1)*power10(i);
			if(!x) res-=power10(i);
		}
		if(num[i]==x){
			res+=get(num,i-1,0)+1;
		}else if(num[i]>x) {
			res+=power10(i);
		}
	}
	return res;
	
}
int main()
{
  int a,b;
  while(cin>>a>>b,a||b){
  	if(a>b) swap(a,b);
  	for(int i=0;i<10;i++)
	  {
	  	cout<<count(b,i)-count(a-1,i)<<" ";
      }
      cout<<endl;
  } 

  return 0;
}



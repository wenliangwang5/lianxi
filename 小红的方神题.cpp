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
int a[N];
void solve()
{
	vector<int> x,y;
	for(int i=1;i<=n;i++) x.push_back(a[i]);
	while(x.size()>1){
		for(int i=0;i<x.size()-1;i++)
		{
			y.push_back(abs(x[i]-x[i+1]));
		}
		x=y;
		y.clear();
	}
	if(x[0]==n-2) {
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
  	    cout<<endl;
  	    
  	    cout<<x[0]<<endl;
  	    cout<<endl;
	}
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) a[i]=i; 
  do{
  	solve();
  }while(next_permutation(a+1,a+1+n));
  
  return 0;
}



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
int k,n;
pair<int,string> a[N];
PII b[N];
void solv()
{
	int p=0;
	
	for(int i=1;i<=n;i++)
	{
		if(a[p].x+b[i].x==1) {
			p=(p+b[i].y)%k;
		}
		else {
			p=((p-b[i].y)%k+k)%k; 
		}
	}
	
	cout<<a[p].y;
}
int main()
{
  cin>>k>>n;
  for(int i=0;i<k;i++){
  	int x;
  	string s;
  	cin>>x>>s;
  	a[i]={x,s};
  }
  for(int i=1;i<=n;i++) {
  	   int x,y;
	  cin>>x>>y;
	  b[i]={x,y}; 
  }
  solv();
  return 0;
}



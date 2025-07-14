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
int exgcd(int a,int b,int &x,int &y){
	if(!b){
		x=1,y=0;
		return a;
	}
	int x1,y1;
	int gcd=exgcd(b,a%b,x1,y1);
	x=y1,y=x1-a/b*y1;
	return gcd;
}
int main()
{
  cin>>n;
  while(n--)
  {
  	int a,b,x,y;
  	cin>>a>>b;
  	exgcd(a,b,x,y);
  	cout<<x<<" "<<y<<endl;
  }

  return 0;
}



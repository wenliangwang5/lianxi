#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int a,b,c,x,y,z;
void solve()
{
	if(a>x) cout<<"The first win!";
	else if(a==x&&b>y) cout<<"The first win!";
	else if(a==x&&b==y&&c>z) cout<<"The first win!";
	else  cout<<"The second win!";
}
int main()
{
  cin>>n;
  while(n--)
  {
  	int m;
  	cin>>m;
  	if(m==0){
  		int p;
  		cin>>p;
  		if(p==1) a++;
  		if(p==2) b++;
  		if(p==3) c++;
	  }
  	else {
  		int p;
  		cin>>p;
  		if(p==1) x++;
  		if(p==2) y++;
  		if(p==3) z++;
	  }
  }
  cout<<a<<" "<<b<<" "<<c<<endl;
  cout<<x<<" "<<y<<" "<<z<<endl;
  solve();
  return 0;
}



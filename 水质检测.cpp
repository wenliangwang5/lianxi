#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
string a,b;
int ans;
int main()
{
  cin>>a>>b;
  int lis=-1,state=-1;
  for(int i=0;i<a.size();i++)
  {
  	if(a[i]=='.'&&b[i]=='.') continue;
  	if(lis!=-1)
  	{
  	   ans+=i-lis-1;
	  }
  	if(a[i]=='#'&&b[i]=='#') {
  		state=3;
	  }
	  else if(a[i]=='#'&&b[i]=='.')
	  {
	  	if(state==2)
	  	{
	  		ans++;
	  		state=3;
		  }
	  	else {
	  		state=1;
		  }
	  }
	  else if(a[i]=='.'&&b[i]=='#')
	  {
	  	
	  	if(state==1)
	  	{
	  		state=3;
	  		ans++;
		  }
		  else {
		  	state=2;
		  }
	  }
	  lis=i;
  }
  cout<<ans<<endl;

  return 0;
}



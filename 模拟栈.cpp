#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int stk[N],tt;
int main()
{  
  int m;
  cin>>m;
  while(m--)
  {
  	string op;
  	int x;
  	cin>>op;
  	if(op=="push")
  	{
  		cin>>x;
  		stk[tt++]=x;
  		
	  }
	  else if(op=="pop") tt--;
	  else if(op=="empty")
	  {
	  	if(tt) cout<<"NO"<<endl;
	  	else cout<<"YES"<<endl;
	  }
	  else cout<<stk[tt-1]<<endl;
  }


  return 0;
}



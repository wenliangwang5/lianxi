#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int N=100010;
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


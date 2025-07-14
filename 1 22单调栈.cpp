#include<bits/stdc++.h>
#include<iostream>
typedef long long ll;
const int N=100010;
using namespace std;
int n;
int stk[N],tt;

int main()
{
	cin>>n;
	
 cin.tie(0);
 cout.tie(0);
 ios::sync_with_stdio(0);
 for(int i=0;i<n;i++)
 {
 	int x;
 	cin>>x;
 	while(tt&&stk[tt]>=x) tt--;
 	if(tt) cout<<stk[tt]<<" ";
 	else cout<<-1<<" ";
 	
 	stk[++tt]=x;
 }
  return 0;
}


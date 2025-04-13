#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int stk[N],tt;
int n;

int main()
{
  cin>>n;
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



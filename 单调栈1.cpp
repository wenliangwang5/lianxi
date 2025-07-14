#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int sta[N],tt;
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	int a;
  	cin>>a;
  	while(tt&&sta[tt]>=a) tt--;
  	if(!tt) cout<<-1<<" ";
  	else cout<<sta[tt]<<" ";
  	
  	sta[++tt]=a;
  	
  }

  return 0;
}



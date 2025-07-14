#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,k;
int a1,a2;
int main()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++) 
  {
  	int x;
  	cin>>x;
  	if(x>=35&&k!=4) a1++;
	if(x>=35&&k==4) a2++;
	if(k+1==8) k=1;
	else k++;
  }
  cout<<a1<<" "<<a2; 
  return 0;
}



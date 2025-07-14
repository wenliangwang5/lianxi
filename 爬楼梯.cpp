#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int a[]={1,2};
int num=0;
int n;
void solve1(int x)
{
   	if(x==n) 
	{
		num++;
		return ;
	}
	if(x>n) return ;	
	for(int i=0;i<2;i++)
	{
		
		solve1(x+a[i]);
		
	}
	return ;
}
int main()
{
  cin>>n;
  solve1(0);
  cout<<num;
  return 0;
}



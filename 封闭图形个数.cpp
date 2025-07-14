#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int a[]={1,0,0,0,1,0,1,0,2,1};
int b[N];
int n;
bool cmp(int x,int y)
{
	int sum1=0,sum2=0;
	int x1=x,y1=y;
	
	while(x1)
	{
		int t=x1%10;
		sum1+=a[t];
		x1/=10;
	}
	while(y1)
	{
		int t=y1%10;
		sum2+=a[t];
		y1/=10;
	}
	if(sum1!=sum2) return sum1<sum2;
	else return x<y;
}
int main()
{
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	cin>>b[i];
  }
  
  sort(b,b+n,cmp);
  for(int i=0;i<n;i++) cout<<b[i]<<" ";
  return 0;
}



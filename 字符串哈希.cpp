#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int q=131;
int n,m;
ll h[N],p[N]; 
bool check(int l1,int r1,int l2,int r2)
{
	return (h[r1]-h[l1-1]*p[r1-l1+1])==(h[r2]-h[l2-1]*p[r2-l2+1]);
}
int main()
{
  cin>>n>>m;
  string x;
  cin>>x;
  h[0]=0;
  p[0]=1;
  for(int i=0;i<n;i++)
  {
  	p[i+1]=p[i]*q;
  	h[i+1]=h[i]*q+x[i];
  }
  
  while(m--)
  {
  	int l1,r1,l2,r2;
  	cin>>l1>>r1>>l2>>r2;
  	
  	if(check(l1,r1,l2,r2)) cout<<"Yes"<<endl;
  	else cout<<"No"<<endl;
  }

  return 0;
}



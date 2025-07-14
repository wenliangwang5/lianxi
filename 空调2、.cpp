#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=110;
int n,m,ans=1e8;
vector<int> a(101);
struct kon{
	int l,r,j,w;
}ar[M];
bool check(vector<int> x)
{
	for(int i=1;i<=100;i++) {
		if(x[i]<0) return false;
	}

	return true;
}
void solve(vector<int>x,int p)
{
	int cost=0;
	for(int i=0;i<m;i++)
	{
		if(p>>i&1)
		{
			int l=ar[i].l,r=ar[i].r,j=ar[i].j,w=ar[i].w;
			cost+=w;
			for(int k=l;k<=r;k++) {
				x[k]+=j;	
			}	
		}
	}


	if(check(x)) ans=min(ans,cost); 
}
int main()
{
  cin>>n>>m;
  while(n--)
  {
  	int l,r,ne;
  	cin>>l>>r>>ne;
  	for(int i=l;i<=r;i++)
  	{
  		a[i]-=ne;
	  }
  }
  for(int i=0;i<m;i++)
  {
  	cin>>ar[i].l>>ar[i].r>>ar[i].j>>ar[i].w;
  }
  
  
  for(int i=0;i<1<<m;i++)
  {
  	
  	vector<int> x(101);
  	copy(a.begin(),a.end(),x.begin());
  	solve(x,i);
  	
  }
  cout<<ans;
  return 0;
}



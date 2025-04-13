#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=300010,M=1010;
int n,m,res;
int a[N],b[N];
vector<PII> x;
void num(int l,int r)
{
	int tem=res;
	for(int i=l;i<=r;i++)
	{
		if(b[i]==1) tem++;
		else if(b[i]==0) tem--;
		
	}
	cout<<tem<<endl;
}
void insert(int l,int r,int k)
{
	a[l]=a[l]+k;
	a[r+1]=a[r+1]-k;

}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=m;i++)
  {
  	int l,r;
  	cin>>l>>r;
  	x.push_back({l,r});
  	insert(l,r,1);
  }
  for(int i=1;i<=n;i++) 
  {
  	b[i]=b[i-1]+a[i];
  	if(b[i]==0) res++;
  }
  
  for(auto it:x)
	{
	int l=it.first,r=it.second;
	
	num(l,r);
	} 
  
  return 0;
}



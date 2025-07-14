#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int e[N],en[N],h[N],idx;
int h1[N],d[N];
void add(int a,int b)
{
	e[idx]=b,en[idx]=h[a],h[a]=idx++;
}
bool solve()
{
	int hh=1,tt=0;
	for(int i=1;i<=n;i++)
	{
		if(!d[i])
		{
			h1[++tt]=i;
		}
	}
	
	while(hh<=tt)
	{
		int t=h1[hh++];
		for(int i=h[t];i!=-1;i=en[i])
		{
			int j=e[i];
			d[j]--;
			if(!d[j]) h1[++tt]=j;
		}
		
	}
	return tt==n;
}
int main()
{
  cin>>n>>m;
  memset(h,-1,sizeof h);
  
  for(int i=1;i<=m;i++)
  {
  	int a,b;
  	cin>>a>>b;
  	d[b]++;
  	add(a,b);
  }
  if(solve()){
  	for(int i=1;i<=n;i++)
  	{
  		cout<<h1[i]<<" ";
	  }
  }
  else cout<<-1<<endl;
  return 0;
}



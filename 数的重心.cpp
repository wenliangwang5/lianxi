#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=500010,M=1010;
int e[N],ne[N],h[N],idx;
int n;
int ans=N;
int st[N];
void add(int a,int b)
{
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
int dfs(int x)
{
	int res=0;
	st[x]=1;
	int sum=1;
	for(int i=h[x];i!=-1;i=ne[i])
	{
		int j=e[i];
		if(!st[j])
		{
			int s=dfs(j);
			res=max(res,s);
			sum+=s;
		}
		
	}
	res=max(res,n-sum);
	ans=min(ans,res);
	return sum;
	
}
int main()
{
  cin>>n;
  memset(h,-1,sizeof h);
  for(int i=1;i<n;i++)
  {
  	int a,b;
  	cin>>a>>b;
  	add(a,b),add(b,a);
  	
  }
  dfs(1);
  cout<<ans<<endl;
  return 0;
}



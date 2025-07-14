#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int ans,tem,t,n;
int a[N],b[N];
void dfs(int u)
{
	if(u==n+1) {
		ans=max(ans,tem);
		return ;
	}
	if(b[u-1]){
		dfs(u+1);
	}
	else{
		dfs(u+1);
		
		tem+=a[u];
		b[u]=1;
		dfs(u+1);
		tem-=a[u];
		b[u]=0;
	}
}
int main()
{
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	memset(b,0,sizeof b);
  	ans=0;
  	tem=0;
  	for(int i=1;i<=n;i++)
  	{
  		cin>>a[i];
	}
	  dfs(1);
	  cout<<ans<<endl;
  }

  return 0;
}



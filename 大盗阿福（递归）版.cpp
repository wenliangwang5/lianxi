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
int t,n;
int a[N],b[N],s[N];
int dfs(int u){
	if(u>n) return 0;
	else {
		if(s[u]) return s[u];
		else {
			s[u]=max(dfs(u+1),dfs(u+2)+a[u]);
			return s[u];
		}
	}
	
}
int main()
{
   cin>>t;
   while(t--)
   {
   	cin>>n;
   	memset(s,0,sizeof s);
   	for(int i=1;i<=n;i++)
   	{
   		cin>>a[i];
	   }
	   
	   cout<<dfs(1)<<endl;
   }

  return 0;
}



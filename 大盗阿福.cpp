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
int n,t;
int a[N],b[N],s[N];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		memset(s,0,sizeof s);
	
		for(int i=1;i<=n;i++)
		{
			s[i]=max(s[i-2]+a[i],s[i-1]);
		}
		cout<<s[n]<<endl;
	}


  return 0;
}



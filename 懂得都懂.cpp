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
int n,k;
int a[N],b[N],st[N],c[N];
unordered_map<int,int> m;
void solv(int x,int c,int u)
{
	if(u>=4) {
//		for(int i=0;i<4;i++) cout<<b[i]<<" ";
//		cout<<endl;
		int c=b[0]+b[1]+b[2]+b[3];
		m[c]=100;
		return ;
	}
	
	for(int i=c;i<=x;i++)
	{
		if(!st[i]) {
			b[u]=a[i];
			st[i]=1;
			solv(x,i+1,u+1);
			b[u]=0;
			st[i]=0;
		}
	}
}
int main()
{
  cin>>n;
  cin>>k;
  for(int i=1;i<=n;i++) cin>>a[i];
  solv(n,1,0);
  
  while(k--)
  {
  	int p,o;
  	bool flag=false;
  	cin>>p;
  	for(int i=1;i<=p;i++)
  	{
  		cin>>c[i];
  		if(m[4*c[i]]!=100) flag=true;
	  }
	  //cout<<m[44]<<endl;
	  if(flag) cout<<"No"<<endl;
	  else cout<<"Yes"<<endl;
  }

  return 0;
}



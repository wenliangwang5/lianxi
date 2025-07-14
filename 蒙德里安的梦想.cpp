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
const int N=12,M=1<<N;
int n,m;
ll f[N][M];
vector<int> state[M];
bool st[M];
int main()
{
  while(cin>>n>>m,n||m)
  {
  	for(int i=0;i<1<<n;i++)
  	{
  		int cnt=0;
  		bool isvalu=true;
  		for(int j=0;j<n;j++)
  		{
  			if(i>>j&1)
  			{
  				if(cnt&1) {
  					isvalu=false;
  					break;
				  }
				  cnt=0;
  	
			  }else cnt++;
	   }
	    
			  if(cnt&1) isvalu=false;
			  
			  st[i]=isvalu;		 
	  }
	  
	  for(int i=0;i<1<<n;i++)
	  {
	  	state[i].clear();
	  	for(int j=0;j<1<<n;j++)
	  	{
	  		if((i&j)==0&&st[i|j]) state[i].pb(j);
		  }
	  }
	  
	  memset(f,0,sizeof f);
	  f[0][0]=1;  
	  for(int i=1;i<=m;i++)
	  {
	  	for(int j=0;j<1<<n;j++)
	  	{
	  		for(auto k:state[j])
	  		    f[i][j]+=f[i-1][k];
		  }
	  }
	  cout<<f[m][0]<<endl;
  }

  return 0;
}



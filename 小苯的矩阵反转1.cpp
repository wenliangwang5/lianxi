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
const int N=100010,M=1010;
int n,m,t;

int main()
{
  cin>>t;
  while(t--)
  {
  	cin>>n>>m;
  	vector<string> a(n);
  	vector<int> p(n);
  	vector<int> q(m); 
  	int s=0;
  	for(int i=0;i<n;i++)
  	{
  		cin>>a[i];
  		for(int j=0;j<m;j++) 
  		{
  			if(a[i][j]=='1')
  			{
  			   p[i]++;
			   q[j]++;
			   s++;	
			  }
		  }
  		
	  }
  	int c1=0,c2=0;
  	for(int i=0;i<n;i++)
  	{
  		if(p[i]==m) c1++;
	  }
	  for(int i=0;i<m;i++)
	  {
	  	if(q[i]==n) c2++;
	  }
	  bool flag=false;
	  for(int i=0;i<n;i++)
	  {
	  	for(int j=0;j<m;j++)
	  	{
	  		if(flag) break;
	  		if(a[i][j]=='0')
	  		{
	  			int x=p[i]+q[j];
	  			if(x==(n+m-2)&&x==s) flag=true;
			  }
			  
		  }
		  if(flag) break;
	  }
	  if(s==0||(c1==2&&s==2*m)||(c2==2&&s==2*n)||flag) cout<<"YES"<<endl;
	  else cout<<"NO"<<endl; 
  }

  return 0;
}



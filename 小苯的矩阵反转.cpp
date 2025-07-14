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
int t;
int n,m,sum;
char a[M][M];
bool check1()
{
	
	if(sum==0) return true;
	else return false;
}
bool check2()
{
	int s=sum;
	int res1=0,res2=0;
	for(int i=1;i<=n;i++) {
		int p=0;
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]=='1') {
				p++;
			}
		}
		if(p==m) {
			res1++; 
			s-=m;
		}
	}
	if(res1==2&&s==0) return true;
	
	int s1=sum;
	for(int i=1;i<=m;i++)
	{
		int p=0;
		for(int j=1;j<=n;j++)
		{
			if(a[j][i]=='1') {
				p++; 
			}
		}
		if(p==n) {
			res2++;
			s1-=n;
		}
	}
	if(res2==2&&s1==0) return true;
	
	
	return false;
}
bool check3(){
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			int s=0;
			if(a[i][j]=='0')
			{
				for(int k=1;k<=m;k++)
				{
					if(a[i][k]=='1') s++; 
				}
				
				for(int k=1;k<=n;k++)
				{
					if(a[k][j]=='1') s++;
				}
				if(s==sum&&s==(n+m-2)) return true;
			}
		}
	}
	return false;
}

int main()
{
  cin>>t;
  while(t--)
  {
  	cin>>n>>m;
  	sum=0;
  	for(int i=1;i<=n;i++)
  	{
  		for(int j=1;j<=m;j++)
  		{
  			cin>>a[i][j];
  			if(a[i][j]=='1') sum++;
		  }
	  }
	  if(check1()||check2()||check3()) cout<<"YES"<<endl;
	  else cout<<"NO"<<endl;
  }

  return 0;
}



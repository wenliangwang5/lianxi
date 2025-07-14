#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int ans;
int j=2;
int p[2];
int n,m,mod1=1000000007;
void dfs(int c)
{
	if(j<0) return ;
	if(c==n+m-1) {
		if(j==1) {
			ans++;
			ans=ans%mod1;
		}	
		return; 
	}
	for(int i=0;i<2;i++)
	{
		 if(p[i]){
				if(i==0){
			       j*=2;
				   p[i]--;
				   dfs(c+1);
				   p[i]++;
				   j/=2;		
				}
				else {
					j-=1;
					p[i]--;
					dfs(c+1);
					p[i]++;
					j+=1;
				}	
	         }
	}
	
}
int main()
{
	cin>>n>>m;
	p[0]=n;
	p[1]=m-1;
	
   dfs(0);  
   cout<<ans;
  return 0;
}



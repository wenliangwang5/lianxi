#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int t;
void solve()
{
	int n,m;
	cin>>n>>m;
	vector<int> in(n+10,0),va[n+10],st(n+10,0);
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		in[a]++,in[b]++;
		va[a].pb(b),va[b].pb(a);
		
	 } 
	int sum=0,count=0;
	for(int i=1;i<=n;i++)
	{
		if(in[i]==1)
		{
			st[i]=1;
			queue<int> h;
			h.push(i);
			while(h.size())
			{
				
				int t=h.front();
				h.pop();
				for(int k=0;k<va[t].size();k++)
				{
					int j=va[t][k];
					if(!st[j])
					{
						if(in[j]==2)
						{
							st[j]=1;
							h.push(j);
						}
						else if(in[j]>2)
						{
							in[j]--;
						}
					}
				}
			}
		}
		else if(in[i]==0) st[i]=1;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(!st[i]){
			
			st[i]=1;
			int flag=1;
			queue<int> h;
			h.push(i);
			int las=count;
			while(h.size())
			{
				int t=h.front();
				h.pop();
				if(in[t]>2) flag=0;
				count++;
				for(int k=0;k<va[t].size();k++)
				{
					int j=va[t][k];
					if(!st[j])
					{
						st[j]=1;
						h.push(j);
					}
				}
			}
			if(!flag) count=las;
			sum+=flag;
		}
		
	}
	if(sum==1) cout<<"Yes "<<count<<'\n';
	else cout<<"No "<<sum<<'\n'; 
}
int main()
{
  cin>>t;
  while(t--)
  {
  	
  	solve();
  }

  return 0;
}



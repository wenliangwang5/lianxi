#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
struct no{
	string p,q;
	int f1,f2;
	
}a[N],b[N],ans[N];
int st[N];
int idx,n,min1=1000;
void add(int idx)
{
	if(idx<min1) {
		for(int i=1;i<=idx;i++)
		{
			ans[i]=b[i];
		}
		min1=idx;
	}
}
void dfs(int x)
{
	if(b[1].p==b[x-1].q&&b[1].f1!=b[x-1].f2)
	{
		add(idx);
		return ;
	}
	if(x>min1) return;
	for(int i=1;i<=n;i++)
	{
		if(x==1) {
			b[x]=a[i];
			st[i]=1;
			idx++;
			dfs(x+1);
			st[i]=0;
			idx--;
			continue;
		}
		
		if(x!=1){
			if(!st[i])
			{
				if(b[x-1].q==a[i].p&&b[x-1].f2==a[i].f1)
				{
					b[x]=a[i];
					st[i]=1;
					idx++;
					dfs(x+1);
					st[i]=0;
					idx--;
				}
				
			}
		}
	}
	
}
int main()
{
	IOS
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	string p,q;
  	int f1,f2;
  	cin>>p>>f1>>q>>f2;
  	a[i].p=p;
  	a[i].f1=f1;
  	a[i].q=q;
  	a[i].f2=f2;
  }
  
  dfs(1);
  for(int i=1;i<=min1;i++){
  	
		cout<<ans[i].p<<" "<<ans[i].f1<<" "<<ans[i].q<<" "<<ans[i].f2<<" ";
      }
  cout<<"="<<" "<<ans[1].p<<" "<<ans[1].f1<<" "<<ans[min1].q<<" "<<ans[min1].f2;
  return 0;
}



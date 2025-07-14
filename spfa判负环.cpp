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
int n,m;
int st[N],e[N],en[N],h[N],w[N],d[N],idx;
int cout1[N];
 
void add(int a,int b,int c)
{
	e[idx]=b,en[idx]=h[a],w[idx]=c,h[a]=idx++;
}

bool spfa(){
	memset(d,0x3f,sizeof d);
	queue<int> q;
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	    st[i]=true;
	    while(q.size()){
		int t=q.front();
	    q.pop();
	    st[t]=false;
		for(int i=h[t];i!=-1;i=en[i]){
			int j=e[i];
			if(d[j]>d[t]+w[i]){
				d[j]=d[t]+w[i];
				cout1[j]=cout1[t]+1;
				if(cout1[j]>=n) return true;
				if(!st[j]){
					
					q.push(j);
					st[j]=true;
				}
				
			}
			
		}
		
		
	}
}

	return false;
	
}
int main()
{
  cin>>n>>m;
  memset(h,-1,sizeof h);
  for(int i=1;i<=m;i++)
  {
  	int a,b,c;
  	cin>>a>>b>>c;
  	add(a,b,c);
  }
  if(spfa()) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}



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
struct no{
	int a,b,w;
}ap[N];
int d[N],cb[N];
int n,m,k;
void ballman_fold()
{
	 memset(d,0x3f,sizeof d);
	 d[1]=0;
	 for(int i=1;i<=k;i++)
	 {
	 	memcpy(cb,d,sizeof d);
	 	for(int j=1;j<=m;j++){
	 		int a=ap[j].a,b=ap[j].b,w=ap[j].w;
	 		d[b]=min(d[b],cb[a]+w);
		 }
	 }
	if(d[n]>0x3f3f3f3f/2) cout<<"impossible"<<endl;
	else cout<<d[n];
}
int main()
{
  cin>>n>>m>>k;
  for(int i=1;i<=m;i++){
  	int a,b,w;
  	cin>>a>>b>>w;
  	ap[i]={a,b,w};
  } 
  ballman_fold();
  return 0;
}



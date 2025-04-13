#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=2000010,M=1010;
int l[N],r[N];
int n,m,f;
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
  	int x;
  	cin>>x;
  	if(x>0) r[x]++;
  	else if(x<0) l[-x]++;
  	if(x==0) f++;
  }
 for(int i=1;i<=m;i++)
 {
 	l[i]+=l[i-1];
 	r[i]+=r[i-1];
 }
 int sum=0,res=-1e7;
 for(int i=1;i<=m;i++)
 {
 	sum=l[i];
 	if(m-i*2>0) sum+=r[m-i*2];
	res=max(sum,res);
	
	sum=r[i];
	if(m-i*2>0) sum+=l[m-i*2];
	res=max(res,sum);
 }
 
 cout<<res+f;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int n;
ll a[N],b[N],c[N];
struct no{
	
	ll w,idx,p;
}x[N];

bool cmp(no t,no d)
{
	return t.w<d.w;
}
bool cmp1(no t,no d)
{
	return t.idx<d.idx;
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++) {
  	cin>>a[i];
  	x[i].w=a[i]*i;
  	x[i].idx=i;
  }
  for(int i=1;i<=n;i++) cin>>b[i];
  
  sort(x+1,x+1+n,cmp);
  sort(b+1,b+1+n);
  
  for(int i=1;i<=n;i++)
  {
    x[i].p=b[i];
  }
  sort(x+1,x+1+n,cmp1);
  for(int i=1;i<=n;i++)
  {
  	cout<<x[i].p<<" ";
  }
  return 0;
}



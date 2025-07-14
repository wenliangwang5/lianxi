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
const int N=200010,M=1010;
int n,ans=-1;
struct no{
	int a,b,x,y,idx;
}o[N];
void check(no x,int p,int q)
{
	if(p>=x.a&&p<=x.x&&q>=x.b&&q<=x.y) ans=x.idx;
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	int a,b,g,k;
  	cin>>a>>b>>g>>k;
  	o[i].a=a;
  	o[i].b=b;
  	o[i].x=a+g;
  	o[i].y=b+k;
  	o[i].idx=i;
  }
  int p,q;
  cin>>p>>q;
  for(int i=1;i<=n;i++)
  {
  	check(o[i],p,q);
  }
  cout<<ans<<endl;
  return 0;
}



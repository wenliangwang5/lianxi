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
int n;
struct Range{
	int l,r;
	bool operator<(const Range &w) const{
	return l<w.l;
	}
}range[N];
int main()
{
  int st,en;
  cin>>st>>en;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	int l,r;
  	cin>>l>>r;
  	range[i]={l,r};
  }
  sort(range+1,range+n+1);
  int res=0;
  bool flag=false;
  for(int i=1;i<=n;i++)
  {
  	int j=i,r=-2e9;
  	while(j<=n&&range[j].l<=st)
  	{
  		r=max(r,range[j].r);
  		j++;
	}
	  if(r<st){
	  	res=-1;
	  	break;
	  }
	  res++;
	  if(r>=en) {
	  	flag=true;
	  	break;
	  }
	  i=j-1;
	  st=r;
  }
  
  if(flag) cout<<res<<endl;
  else cout<<-1<<endl;
  return 0;
}



#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<cstring>
#include<cmath>
#include<stack>
#include<string>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define endl '\n'
#define deb(x) cout<<"#"<<x<<" "
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef pair<int,int> PII;
const int N=200010,M=1010,nod=1e9+7;
int n,len;
int a[N],q[N];
signed main()
{
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  q[0]=-2e9;
  for(int i=1;i<=n;i++)
  {
  	int l=0,r=len;
  	while(l<r){
  		int mid=l+r+1>>1;
  		if(q[mid]>=a[i]) r=mid-1;
  		else l=mid;
	  }
	  /*
	  int l=0,r=len;
	  while(l<r){
	  int mid=l+r>>1;
	  if(q[mid]<=a[i]) l=mid+1;
	  else r=mid;
	  
	  
	  */
	  
	  
  	len=max(len,l+1);
  	q[l+1]=a[i];
  }
  cout<<len<<endl;
  return 0;
}



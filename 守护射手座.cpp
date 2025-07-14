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
int ans,n,k;
vector<int> a;
int main()
{
  cin>>n>>k;
  
  for(int i=1;i<=n;i++)
  {
  	int x;
  	cin>>x;
  	a.push_back(x);
  }
  
  int p=a.size()-1;
  if(a[p]<k) {
  	ans++;
  	a[p-1]+=a[p];
  	p--;
  }
  if(a[0]<k) {
  	ans++;
  	a[1]+=a[0];
  }
  
  for(int i=p;i>=1;i--)
  {
  	if(a[i]>=k) continue;
  	else 
  	{
  		a[i-1]+=a[i];
  		ans++;
	  }
	  
  }
  
 if(ans==n) cout<<-1<<endl;
 else cout<<ans<<endl;
  return 0;
}



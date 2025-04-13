#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int n;
ll a[N],b[N];
bool st[N];
ll ans;
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)  cin>>a[i];
  for(int i=1;i<=n;i++)  cin>>b[i];
  sort(a+1,a+1+n);
  sort(b+1,b+1+n);
  for(int i=1,j=1;i<=n;i++)
  {
  	if(a[i]*2>b[j])//每次出现第一个合格的就选上 保证最后数量最大 
	  //你不选的话后面的给选了 但是你用不了后面的 
  	{
  		j++;
  		ans++;
	  }
  	
  }
  cout<<ans;
  return 0;
}



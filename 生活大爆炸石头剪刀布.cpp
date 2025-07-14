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
int n,k1,k2;
int x[N],y[N];
int ans1,ans2;
int main()
{
	int a[5][5]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
 
  cin>>n;
  cin>>k1>>k2;
  for(int i=0;i<k1;i++) cin>>x[i];
  for(int i=0;i<k2;i++) cin>>y[i];
  for(int i=0;i<n;i++)
  {
  	ans1+=a[x[i%k1]][y[i%k2]];
  	ans2+=a[y[i%k2]][x[i%k1]];
  }
  cout<<ans1<<" "<<ans2;
  return 0;
}



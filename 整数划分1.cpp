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
const int N=200010,M=1010,mod=1e9+7;
int f[M][M];
int n;
int main()
{
  cin>>n;
  f[0][0]=1;//什么也不选也是一种方案 
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=i;j++)
  	{
  		f[i][j]=(f[i-1][j-1]+f[i-j][j])%mod;
  		//状态转移方程 由含最小值1和不含最小值1的两种情况组成 
	  }
  }
  int p=0;
  for(int i=1;i<=n;i++)
  {
  	p=(p+f[n][i])%mod;//把每个数量的方案数加起来求和即可 
   } 
   cout<<p<<endl;
  return 0;
}



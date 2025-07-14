#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,k,ans;
int res=0;
int main()
{
  cin>>n>>k;
  res=n;//初始烟蒂是n 每次把兑换剩下的和兑换后新产生的一起更新一下烟蒂数 继续计算 直到<k为止 
  while(res>=k)
  {
  	
  	ans+=res/k;
  	
  	res=res%k+res/k;
  }
  cout<<ans+n;
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=400010;
int  t,n;
ll m;
ll q[N],s[N];
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>q[i],q[i]%=m;
	sort(q+1,q+n+1);
	
	//排序用以判断中位数 
	for(int i=1;i<=n;i++) q[i+n]=q[i]+m;//首次取模（因为负数取模默认加取模数m）还需二次取模 
	
	
	
	for(int i=1;i<=2*n;i++) s[i]=s[i-1]+q[i];//
	
	ll res=1e18;
	for(int i=1;i<=n;i++)//枚举每个区间，使用中位数定理计算操作次数 
	{//中位数定理：对n个数字进行操作找到把所有数字变成x的最小操作次数
	//就是每个操作数字减去他们这个序列的中位数 
		int l=i,r=i+n-1;
		int mid=(l+r)>>1;
		//根据序列枚举mid即为x
		//利用前缀和减去mid进行计算操作次数 
		ll sum=((mid-l)*q[mid]-s[mid-1]+s[l-1])+(s[r]-s[mid]-(r-mid)*q[mid]);
		res=min(res,sum);
	}
	
	cout<<res<<endl;
}
int main()
{
  cin>>t;
  while(t--)
  { 
  	solve();
  }

  return 0;
}


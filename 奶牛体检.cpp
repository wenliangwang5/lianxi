#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=10010;
int a[N],b[N],ans[N];
int sum,cnt;
 
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i]; 
  for(int i=1;i<=n;i++) cin>>b[i];
  //统计基础符合条件的数量 
  for(int i=1;i<=n;i++) if(a[i]==b[i]) cnt++;
  //开始枚举每个中点向外扩展 
  for(int i=1;i<=n;i++)
  {
  	int l=i,r=i;//L==R并且同时减一枚举奇数区间 
  	sum=cnt;//赋初始值给SUM 
  	while(l>=1&&r<=n)
     
     {
     	//枚举的左右端点符合条件的加上，不符合的减去 
     	sum+=(a[l]==b[r])+(a[r]==b[l])-(a[l]==b[l])-(a[r]==b[r]);
     	ans[sum]++;//相应数量的的方案数量加一 
     	l--,r++;//端点更新 
	 }
	l=i-1,r=i;//同上，枚举偶数端点 
	sum=cnt;
	while(l>=1&&r<=n)
	{
		sum+=(a[l]==b[r])+(a[r]==b[l])-(a[l]==b[l])-(a[r]==b[r]);
		ans[sum]++;
		l--,r++;
	}
   } 
   for(int i=0;i<=n;i++) cout<<ans[i]<<endl;//打印每个数量的解决方案数量 
  return 0;
}


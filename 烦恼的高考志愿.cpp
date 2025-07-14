#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int a[N],b[N];
int n,m;
ll sum;
int solve(int x)//二分查找 第一个大于x的值 
{
	int l=1,r=n;
	while(l<r)//
	{
		int mid=l+r>>1;
		if(a[mid]<=x) l=mid+1;
		else r=mid;
	}
	if(x<=a[1]) {//当 都大于x时 r=1 不能用r-1了 要特判 都小于x的话r和r-1都可用 
		return abs(a[1]-x);
	}
	else {
		return min(abs(a[r]-x),abs(x-a[r-1]));//找出边界的最小差值 
	}
	
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++) cin>>a[i];//数据输入  
  for(int i=1;i<=m;i++) cin>>b[i];
  
  sort(a+1,a+1+n);//排序 
  
  for(int i=1;i<=m;i++)
  {
  	sum+=solve(b[i]);//二分找每个最小答案 
  	
  }
  cout<<sum;//输出全部最小答案 
  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;

int n,m;
int q[N]; 
int main()
{
   cin>>n>>m;
   for(int i=0;i<n;i++) cin>>q[i];
   while(m--)//M次查询 
   {
   	int x;
   	cin>>x;
   	int l=0,r=n-1;//初始化边界 
   	while(l<r)//查找左边界 
   	{
   		int mid=l+r>>1;
   		if(q[mid]>=x) r=mid;//出现大于等于时，需要往左边走，更新r为mid 
   		else l=mid+1;//小于时需要往右走，更新L为mid+1 
	   }
	   
	   if(q[l]!=x) cout<<"-1 -1"<<endl; //若最后没查到x,打印—1 -1 
	   else {
	   	cout<<l<<" ";//输出左边界 
	   	int l=0,r=n-1;//重置边界l和r 
	   	while(l<r)//查找右边界 
	   	{
	   		int mid=l+r+1>>1;//若区间长度为偶数，且mid比X小 容易出现无线循环而卡住，所以要l+r>>1再+1 
	   		if(q[mid]<=x) l=mid;//小的话往右走，更新l为mid 
	   		else r=mid-1;//大的话往左走，更新r为 mid-1 
		   }
		
		cout<<l<<" "<<endl;   //输出右边界 
	   }
	   
	 }  

  return 0;
}


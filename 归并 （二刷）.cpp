#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1000010;
int n;
int q[N],tmp[N];
ll ans;
//构造归并函数  L  R分别为左右端点 
ll merge_sort(int q[],int l,int r)
{
	if(l>=r) return 0;//递归终止条件 
	int mid=l+r>>1;//取中间点 
	merge_sort(q,l,mid),merge_sort(q,mid+1,r);//先进行递归操作，当大区间的子集归并完成后再操作大区间 
	int k=0,i=l,j=mid+1;//从前往后遍历大区间子集进行排序 
	while(i<=mid&&j<=r)
	{
		if(q[i]<=q[j]) tmp[k++]=q[i++];//小区间两端比较把小的放进tmp里面 
		else tmp[k++]=q[j++],ans+=mid-i+1;
		
	}
	//逐个区间判断是否有剩余，有的话接在tmp 后面 
	while(i<=mid) tmp[k++]=q[i++];
	while(j<=r) tmp[k++]=q[j++];
 for(int i=l,j=0;i<=r;j++,i++) q[i]=tmp[j];//把排序好的子区间tmp合入本体q里面 
 
 return ans;;
 	
	
}
int main() 
{
  scanf("%d",&n);
  for(int i=0;i<n;i++) scanf("%d",&q[i]);
  //归并函数 
  cout<<merge_sort(q,0,n-1)<<endl;
   
 
  return 0;
}


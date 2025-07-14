#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1000010;
int q[N];
//构造快排函数 
void quick_sort(int q[],int l,int r)
{   //L R分别为左右端点 
	if(l>=r) return ;//递归终止条件 
	int x=q[(l+r)>>1],i=l-1,j=r+1;//计算快排比较中点 
	
	while(i<j)
	{
		while(q[++i]<x);//循环判断左右两边的大于X和小于X的值 
		while(q[--j]>x);
		
		
		if(i<j)  swap(q[i],q[j]);//交换两值 
	}
	
	quick_sort(q,l,j);//根据中点值递归再判断左右两区间 
	quick_sort(q,j+1,r);
	
	return ;
	
}
int main()
{
  int n,k;
  scanf("%d%d",&n,&k);
  for(int i=0;i<n;i++) scanf("%d",&q[i]); 
  quick_sort(q,0,n-1);//快排函数 
  //for(int i=0;i<n;i++) printf("%d",q[i]);
  
  cout<<q[k-1];
  return 0;
}


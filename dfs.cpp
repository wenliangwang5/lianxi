#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
bool st[N];
int path[N];
int n;
vector<int> a(n);
//深度搜索 递归遍历所有结果 
void dfs(int u,vector<int> &a)
{//终止条件    当遍历的位置到头时 输出当前结果 
	if(u==n) 
	{
		for(int i=0;i<n;i++) printf("%d",path[i]);
		puts("");
		return ;
	 } 
	 //每次从头开始遍历 找没用过的 
	 for(int i=0;i<n;i++)
	 {
	 	//如果标记点没有用过 
	 	if(!st[i])
	 	{   
	 		path[u]=a[i];//放入结果中 
	 		st[i]=true;//标记点更新 
	 		dfs(u+1,a);//进行下一层遍历 
	 		st[i]=false;//下一层遍历结束后 这种情况已用过 退回原现场 标记点复原
			 //但i遍历只能往后 所以往后搜索没出现的结果 
		 }
	 }
}
int main()
{
  
  cin>>n;
 
  for(int i=0;i<n;i++) 
  {
  	int p;
  	cin>>p;
	a.push_back(p); 
  }
  dfs(0,a);
  return 0;
}


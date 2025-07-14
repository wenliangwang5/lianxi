#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define int long long
const int N=100010;
#define int long long
int ans=1e18;
vector<vector<int>> adj;//二维数组存储树结构 
vector<int> res;//一维数组存储节点所有子树的陡峭值和 

int  dfs(int x,int fa)//从头深度搜索每条边 
{
	int sum=0;//累加变量 
	for(auto t:adj[x])
	{
		if(t==fa) continue;//如果是子节点和父节点的那条边 忽略
		//如果是其他节点 
		sum+=dfs(t,x)+abs(x-t);//累加和加上这次的陡峭值和以此节点为根的数的陡峭值 
		
	}
	res[x]=sum;//更新以此节点为根的树的陡峭值 
	return sum;//返回以此节点为根的树的陡峭值 
}

void dfs1(int x,int fa,int ret)//深度搜索遍历边 计算某便两树差值最小的某边 
{
	for(auto p:adj[x])// 从根节点开始遍历 
	{
		if(p==fa) continue;//父节点忽略 
		ans=min(ans,abs(res[p]-(ret-abs(x-p)-res[p])));//子节点树陡峭值 减去拆分后剩余树陡峭值  
		//ret是总陡峭值 x-p差掉得那条边的陡峭值  不断调用min求最小值 
		dfs1(p,x,ret);//继续搜索下一条边 
	}
	return ;//返回 
}
signed main()
{    

  	int n;
	cin>>n;
	adj=vector<vector<int>> (n+1);//树二维数组的初始化 
	res=vector<int> (n+1);//累计陡峭值数组初始化 
	for(int i=0,u,v;i<n-1;i++)
	{
		cin>>u>>v;
		adj[u].emplace_back(v);//树的构建 双向边 
		adj[v].emplace_back(u);
	}
	dfs(1,-1);
	int ret=res[1];//ret是总陡峭值 
	dfs1(1,-1,ret);
	cout<<ans<<endl;

  return 0;
}



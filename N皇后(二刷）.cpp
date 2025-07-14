#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=20;
int n;
char g[N][N];
bool col[N],dg[N],udg[N];//col是列标记 dg是正斜线标记 udg是反斜线标记 
void dfs(int u)
{
	if(u==n)//（终止条件）u即时遍历层数又是行号 因为每一行只能放一个 
	{
		//遍历到头输出所有结果 
		for(int i=0;i<n;i++) puts(g[i]);
		
		puts("");
		return ;
		
	 } 
	 //从前往后遍历所有列 
	 for(int i=0;i<n;i++)
	 {//u行i列的列标记 正斜线 反斜线标记都未被使用的话 
	 	if(!col[i]&&!dg[u+i]&&!udg[n+i-u])//条件判断 符合条件的话更新地图 
	 	{
	 		g[u][i]='Q';//更新地图 
	 		col[i]=dg[u+i]=udg[n+i-u]=true; // 更新标记 
	 		dfs(u+1);//下一层继续搜索 
	 		col[i]=dg[u+i]=udg[n+i-u]=false;//下一层结果返回后 抛弃这种情况 标记复原 
	 		g[u][i]='.';//地图复原 但i会继续往后搜索合适的列直到所有的列都搜完 
		 }
	 }
}
int main()
{
  cin>>n;
  for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
	 {
	 	g[i][j]='.';
	  } 
  
  dfs(0);
  
   
  return 0;
}


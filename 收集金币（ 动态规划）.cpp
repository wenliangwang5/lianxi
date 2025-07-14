#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1010;
ll dp[N][N],a[N][N];// dp是从起始点到 i j坐标的最大金币数量 a 是存储金币的地图 
ll tag[N][N];//tag存储的是某个格子变为墙的坐标和回合数 
void solve ()
{
	ll n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		     cin>>a[i][j];//输入地图上的金币数量 
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			dp[i][j]=-1e9;//初始化金币数量为负无穷 
			tag[i][j]=1e9;// 变为强的回合数为正无穷 
		}
	}
	
	dp[1][0]=0;//初始化起始点的左边或者上边为0 开启dp遍历 
	ll k;
	cin>>k;// k是变为强的信息数 
	for(int i=1;i<=k;i++)
	{
		ll x,y,v;//变为墙的坐标 回合数 
		cin>>x>>y>>v;
		tag[x][y]=v;//相应坐标上写入回合数 
		
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i+j-2>=tag[i][j]) a[i][j]=-1e10;//如果更新到这里的回合数大于等于变为墙的回合数
			// 此点金币数更新为负无穷（意为无效点 max会筛去此点 
		}
	}
	ll ans=0;//答案 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			dp[i][j]=max(dp[i-1][j],dp[i][j-1])+a[i][j]; //从左到右 从上到下 每个点只能从他的左边或者上边更新 
			//用max取两点最大值 写入 
			ans=max(ans,dp[i][j]);//没写入一个点的金币数 更新一下最大值 
		}
	}
	
	cout<<ans;
}
int main()
{

  solve();
  return 0;
}



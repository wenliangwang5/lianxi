#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,m;
int a[M];
int ans[M];//简单dfs解法 
void print()//终态输出 
{
	for(int i=1;i<=m;i++)
	{
		cout << setw(3) << ans[i];
	}
	cout<<endl;
}
void dfs(int x,int b)//x表示位置  b表示当前位置放的数字 
{
	if(x==m+1) {
		print();
		return ;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]<=b) continue;//关键点  如果当前要放的数字小于上次放的 继续匹配 
		
		ans[x]=a[i];//放进答案数组里 
		dfs(x+1,a[i]);//下一个 
		ans[x]=0;//恢复现场 
	}
	
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++) a[i]=i;//数据初始化 
  
  dfs(1,0);
  
  return 0;
}



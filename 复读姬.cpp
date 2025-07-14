#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int n;
string s[N];
int pre[N],suf[N];//pre为从前往后计算的连续数 suf是从后往前计算的连续数 
void solve()
{
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}//数据输入 
	pre[1]=1,suf[n]=1;//前后端初始化 
	for(int i=2;i<=n;i++)
	{
		if(s[i-1]==s[i]) 
		{
			pre[i]=pre[i-1]+1;//从2开始枚举计算连续数 与前的一样的话 更新当前的 
		}
		else pre[i]=1;//否则的话开一个新的连续数 
	}
	for(int i=n-1;i>=1;i--)
	{
		if(s[i+1]==s[i]) //后面的和当前的一样  
		{
			suf[i]=suf[i+1]+1;//利用后面的更新前面的 
			
		}
		else suf[i]=1;//否则新建一个连续数 
	}
	
	for(int i=2;i<n;i++)//从2开始枚举  
	{//若左右两端相等 答案取左右两边连续数之和的最大值 
		if(s[i-1]==s[i+1]) ans=max(ans,pre[i-1]+suf[i+1]);
	} //若数据都是连续的 不间断 则可以不撤回消息 所以需要在判断一下 
	for(int i=1;i<=n;i++) ans=max({ans,pre[i],suf[i]});
	
	cout<<ans;
}
int main()
{
  cin>>n;
  solve();
  return 0;
}


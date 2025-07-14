#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
void solve()
{
  int n;
  cin>>n;//输入输入数据长度 
  vector<ll> h(n+1),a(n+1),rank(n+1);//最初高度，增量高度，排位顺序 
  for(int i=1;i<=n;i++) cin>>h[i];//输入数据 
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n;i++) 
  {
  	int x;//x是有几个比他本来的位次i上的数更高 
  	cin>>x;//那么原来的为序次就被赋值给x+1 
  	rank[x+1]=i;
   } 
   /*
   x=hi,y=a[i],u=hi+1,v=a[i+1]
    x+ky>u+kv;不等式化简可以得到如下 
   k>(u-x)/(u-v)   y-v>0
   k<(u-x)/(y-v)   y-v<0
   我们从后往前即从小玩往大枚举i 计算符合条件的天数范围 最后求出最小值即可 
  
   
   */
   ll ansl=0,ansr=1e18;//符合 条件的左右边界 
   int ok=1;//特殊情况的标记点 
   for(int i=n-1;i>=1;i--)
   {
   	auto x=h[rank[i]],y=a[rank[i]];//第i位的初高和增量 
   	auto u=h[rank[i+1]],v=a[rank[i+1]];//第 i+1位的初高和增量 
   	if(y==v)
   	{//增量一样呢时判断初高是否按顺序 
   		if(x<=u)
   		{//顺序不对 修改标点 退出循环 
   			ok=0;
   			break;
		   }
	  //否则继续 
	   else continue;
   }
    
if(y>v)//增量 之差为正 
    //计算下边界 求最大值 
	ansl=max(ansl,(ll)(floor((1.0*u-x)/(y-v))+1));
	else //为负 计算下边界求最大值 
	ansr=min(ansr,(u-x+y-v+1)/(y-v)-1);

  }
  //若标点不变且区间正常有交集 输出答案 
if(ok&&ansl<=ansr) cout<<ansl<<'\n';
else cout<<-1<<'\n';//否则无解 
}
int main()
{ 
  int m;
  cin>>m;//输入操作次数 
  while(m--)
  {
  	solve();//每次调用函数进行操作 
  }
  return 0;
}


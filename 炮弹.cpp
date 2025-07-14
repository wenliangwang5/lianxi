#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int n,beg,power,ans,cnt;
int a[N],b[N];//a数组用来存数值 b数值类型 
bool flag1[N];//存储是否被击破过 

void  solve()
{
	power=1;//初始化能量 
	int x=1;//方向初始化 
	int idx=beg;// 位置初始化 
	
	while(cnt<n*26) //防止操作出现循环 设定操作上限 
	{
	cnt++;//每次循环操作上限加一 
    if(b[idx])//如果是击破点的话 
    {//判断能量是否足以击破 并且有没有被用过 
    	if(power>=a[idx]&&!flag1[idx])
    	{//没有的话 且能量足够 
    		flag1[idx]=true;// 标记点修改一下  
    		ans++;//击破数量加一 
		}
	}
	else //否则是跳板的话 
	{
		power+=a[idx];//能量增加 
		x=-x;//方向改变 
	}
	idx+=x*power;//计算下一次落点坐标 
	if(idx<1||idx>n) break;//当超出界限后 直接终止循环 
	}
	
}

int main()
{
  scanf("%d%d",&n,&beg);
  for(int i=1;i<=n;i++)
  {
  	int bi,valu;
  	scanf("%d%d",&bi,&valu);
  	a[i]=valu;//数值输入 
  	b[i]=bi;
  }
  solve();//函数调用 
  
  printf("%d",ans);
  return 0;
}


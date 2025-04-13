#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
#define x first
#define y second
int n,m;
PII q[N];//存储柱子数组 
int s[M][M];//前缀和数组 
int get(int x,int tx)//两点方向判定数组 ps :我是真没想到还能这样写 
{
	if(tx>x) return 1;//临时的大于初始的 正向的 
	if(tx<x) return -1;//临时的小于初始的负向的 
	return 0;//否则没变 
}
int main()
{
  scanf("%d%d",&m,&n);
  for(int i=0;i<n;i++) scanf("%d%d",&q[i].x,&q[i].y);//主子坐标输入 
  int sum=0,x=q[n-1].x,y=q[n-1].y;//以倒数第以、一个节点位哨兵点计算距离 
  for(int i=0;i<n;i++)
  {//从第一个点循环遍历 并且预处理前缀和数组 
  	int tx=q[i].x,ty=q[i].y;//提取当前柱子坐标 
  	int vx=get(x,tx),vy=get(y,ty);//计算二维速度 
  	while(x!=tx||y!=ty)//如果起始点没有到临时点 继续循环 
  	{
  		x+=vx;//起始点更新 
  		y+=vy;
  		s[x][y]=++sum;// 前缀距离更新 
	  }
  }
  
  while(m--)
  {
  	//处理多次询问 
  	int x1,y1,x2,y2;
  	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  	int dist=s[x2][y2]-s[x1][y1];//计算距离 
  	if(dist<0) dist+=sum;//如果距离为负数 再加上总长变为正数 
  	printf("%d\n",min(dist,sum-dist));//计算两端最短距离 输出即可 
  }
  return 0;
}



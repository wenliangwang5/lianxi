#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=110;
typedef pair<int,int> PII; 
int n,m;
int g[N][N];//地图二维数组 
int d[N][N];//距离二维数组 每个点存放的是该点到起始点0  0的最短可达距离 
PII q[N*N];//模拟每一轮坐标队列的数组 通常长度会更大一点 
int bfs()
{
	int hh=0,tt=0;//头部索引和尾部索引 
	q[0]={0,0};//队列起点初始化 
	memset(d,-1,sizeof d);//初始化距离数组 
	d[0][0]=0;//距离起始点初始化 
	int dx[4]={0,-1,1,0},dy[4]={-1,0,0,1};//模拟四个方向的坐标变换 
	while(hh<=tt)//队列不空时 
	{
		auto t=q[hh++];//提取队头 
		for(int i=0;i<4;i++)//模拟四个方向的坐标变换 
		{
			int x=t.first+dx[i],y=t.second+dy[i];//写出变换过后的临时坐标 
			if(x>=0&&x<n&&y>=0&&y<m&&g[x][y]==0&&d[x][y]==-1)//判断临时坐标是否合法 
			{
				d[x][y]=d[t.first][t.second]+1;//合法的话 上个坐标的距离+1就是此坐标的距离 
				q[++tt]={x,y};//坐标入队 
			}
		}
	}
	return d[n-1][m-1];//所有遍历完输出最终点的距离 
}
int main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<m;j++)
  	{
  		cin>>g[i][j];
	  }
  }
  cout<<bfs()<<endl;
  return 0;
}


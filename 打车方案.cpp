#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;//优先队列构建最小车价队列 
priority_queue<int> p1; //优先队列构建最大路程   想要车费最便宜就需要最长的路程搭配最小的价格 
int main()
{
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
   	int s;
   	cin>>s;
   	p1.push(s);//路程入队列 
   }
   for(int i=0;i<n;i++)
   {
   	int a,b;
   	cin>>a>>b;
   	p.push({a,b});//车费初始价格和每次增量入队列 
   }
   
   ll ans=0;//会爆int 用ll 
   for(int i=0;i<m;i++)
   {//每次坐车 从优先队列里找最便宜的车价和最长的路程 
   	int a=p.top().first,b=p.top().second,c=p1.top();
   	ans+=a*c;//答案增加 
   	a+=b;//车费单价增加 
   	p.pop();//旧的车价出队列 
   	p.push({a,b});// 新的车价入队列 
   	p1.pop();//路程走完出队列 
   }
   cout<<ans;//打印答案 
	return 0;
}

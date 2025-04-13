#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
string sta,en;//初态和末态 
unordered_map<string,int> st;//既是标记数组也是次数数组 
queue<string> q;//所需队列 
int dis; // 距离变量 
int dx[]={-1,1,0,0};//偏移量 
int dy[]={0,0,-1,1};
void dfs(string sta,string en)
{
	st[sta]=0;
	q.push(sta);//初态的初始化 
	while(q.size())
	{
		string t=q.front();
		if(t==en) return ;//每次取出来后先判断一下是否是末态 是的话直接返回 
		
	    dis=st[t];	//记录上次次数 
		q.pop();//出队 
	    for(int i=0;i<16;i++)//当前状态逐个字符遍历 
	    {
	    	if(t[i]=='1')//是1的话进行交换 
	    	{
	    		int x=i/4,y=i%4;//找到在数组中表示的下表来进行偏移交换 
	    		for(int j=0;j<4;j++)
	    		{
	    			int tx=x+dx[j];
	    			int ty=y+dy[j];
	    			if(tx>=0&&tx<4&&ty>=0&&ty<4)//偏移下标合法 
	    			{
	    			  int k=tx*4+ty;//找到下表在状态中的索引 
	    			  if(t[k]!='1')//是0的话交换  1的话交换没意义 
					  {
					  	swap(t[i],t[k]);
					  	if(!st[t])//判断状态是否更新过 没的话入队 更新次数 
						  {
					  	      st[t]=dis+1;
							  q.push(t);	
						  }
						swap(t[i],t[k]);//换回来为下个字符准备 
				      } 
	    			
					}
				}
			}
		}
		
	}
}
int main()
{
    for(int i=1;i<=4;i++)
    {
    	string x;
    	cin>>x;
    	sta+=x;//初末态的初始化 
	}
	for(int i=1;i<=4;i++)
	{
		string x;
		cin>>x;
		en+=x;
	}
   dfs(sta,en);//调用和打印 
   cout<<st[en]<<endl;
  return 0;
}



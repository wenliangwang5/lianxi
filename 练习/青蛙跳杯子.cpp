#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
string st,ed;//存储开始状态和结束状态 
queue<string> q;//创建队列进行宽度搜索 
map<string,int> cur;//使用map构建每种状态步数 
int main()
{
    cin>>st>>ed;
    q.push(st);
    cur[st]=0;
    while(!q.empty())
    {
    	string tem=q.front();//取出队头状态进行下一步搜索 
    	q.pop();//状态出队 
    	int idx=cur[tem];//记下步数值 
    	if(tem==ed)//判断是否是终止状态 
    	{
    		cout<<idx;//是的话输出步数 
    		return 0;
		}
    	int p= tem.find('*');//找到空被子位置 
    	for(int i=0;i<tem.size();i++)
    	{//开始遍历能跳到的位置 
    		if(i==p||abs(i-p)>3) continue;//超出范围的跳过 
    		swap(tem[i],tem[p]);//没超出变换一下 
    	   if(cur[tem]==0)//如果状态不存在那就更新 插入队列 
    	   {
    	   		q.push(tem);
    	   		cur[tem]=idx+1;//步数加一 
		   }
    		swap(tem[i],tem[p]);//复原进行下种情况的判断 
    		
		}
    	
	}

  return 0;
}



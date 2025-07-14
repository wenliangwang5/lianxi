#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;//模拟加减法（高精度） 根据汉诺塔数学性质 得n个盘子需要2的 n次方-1次移动
//数据范围是15000 2的10次方是10的3次方约为 2的15000次方为10的4500次方大概 远超 ll的18次方了
//需要高精度 思路是进行n次乘2 最后-1就行 乘2是用数组模拟每一位的变化 最后更新原数组继续乘 
vector<int> b;
void solve(int n)
{//高精度乘法 
   	for(int k=1;k<=n;k++)
   	{
   		int t=0;//进位标记 
   		vector<int> c;//处理后数组 
   		for(int i=0;i<b.size();i++)
   		{
   			t+=b[i]*2;//本位乘2加上进位 
   			c.push_back(t%10);//重新计算本位 
   			t/=10;//下次进位预处理 
		   }
		   if(t) c.push_back(t);//最后一位进位也要算进去 
		   
		    b=c;//更新原数组为下次做准备 
	   }
	   
	   //高精度减法 
	  int t=1;//借位标记 
	  vector<int> c;
	  for(int i=0;i<b.size();i++)
	  {
	  	t=b[i]-t;//借位处理 
	  	c.push_back((t+10)%10);//冲进计算本位 
	  	if(t<0) t=1;//下次借位预处理 
		else t=0; 
	  	
	  }
	  b=c;
	  
	   while(b.size()>1&&b.back()==0) b.pop_back();//防止乘0 导致前导0（不过这题好像不需要） 
	  for(int i=b.size()-1;i>=0;i--) cout<<b[i];//注意数是逆向存储的 需要逆向输出 
}
int main()
{
  cin>>n;
  b.push_back(1);//乘法吗 先乘1 
  solve(n);
 
  return 0;
}



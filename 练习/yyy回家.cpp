#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int s,v;
//  ps: 一个小模拟 我只测试了100 99 和1201  2 如有出错敬请指正 
void solve()
{
	int minute=(s+v-1)/v+10;//因为输出的答案仅仅精确到分
	//所以不足一分钟的路程我们要向上取整 补齐 以确保能到学校 
	//存在一种向上取整的方式如上 被除数加上除数减去1的值 再加上10分钟垃圾分类的时间 
	int clock=minute/60;//算出整的小时数 
	
	minute=minute%60;//算出余下的分钟 
	
	int HH,MM;//表示时 分
	 
	HH=(8-clock+24)%24;//从8点开始减去小时数是最晚能到达的时刻
	//需要注意的是 如果时间过长会到达半夜24时前 需要加上24 但是如果时间没超过8时 对24求一下余即可 
	if(minute>0) //处理余下的分钟   
	{// 不为0需要小时数在减一 
		MM=60-minute;
		HH=(HH-1)%24; 
	}//为-0输出0即可 
	else MM=00;
	
	//在HH的值时单双数时输出不同的格式即可 
	HH>9?cout<<HH<<":"<<MM : cout<<"0"<<HH<<":"<<MM ;
}
int main()
{
  cin>>s>>v;//输入路程和速度 
  solve();//解决函数 

  return 0;
}



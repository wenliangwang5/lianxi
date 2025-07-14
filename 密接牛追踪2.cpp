#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=300010;

int a[N]; 
int n;
vector<int> cnt,days;
char s[N];

int main()
{
  cin>>n;

  
  for(int i=0;i<n;i++) 
  {
  	cin>>s[i];
  	a[i]=s[i]-'0';//字符转化为数字 
  }
  int len=0;//初始字串长度为0 
  for(int i=0;i<n;i++)
  {
  	if(a[i]==0)//碰到为0时，若前面有连续的1 把前一段放入容器中 
  	{
  		if(len) cnt.push_back(len);
  	    
  	    len=0;//长度归0 
	  }
	  else len++;//不为0时 长度加一 
  }
  
  if(len)
  {//遍历结束时，最后一段也放入容器里 
  	cnt.push_back(len);
  }
  
  if(cnt.empty()) //判断容器是否为空 
  {
  	cout<<"0";
  	return 0;//为空直接输出0 
  }
  //求每一段字串的最大半径 
  for(int i=0;i<cnt.size();i++)
  {
  	if(a[0]&&!i) //特判头部字串 
  	{
  		days.push_back(cnt[i]);
	    continue;
	  }
  	//特判尾部字串 
  	if(a[n-1]&&i==cnt.size()-1) 
  	{
  		days.push_back(cnt[i]);
		  continue;
	  }
	  //中间字串半径划分 
	 days.push_back((cnt[i]+1)>>1); 
  }
  //全部字串排序后找到最小的 
  sort(days.begin(),days.end());
  int day=days[0];
  int case1=2*day-1;//计算最小半径所覆盖范围 
  int ans=0;
  for(auto item:cnt)
  {
  	ans+=item/case1;//计算有几个最小半径 
  	if(item%case1!=0) ans++;//有余数的话再加一个最小半径即可 
  }
  
  cout<<ans;//最后结果就是有几个最小半径 
  return 0;
}


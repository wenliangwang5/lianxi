/*
#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=5010;
int a[N];
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  for(int i=1;i<=n;i++) a[i]=s[i-1]-'0';
  for(int i=1;i<=n;i++)
  {
  	int res=1;
  	if(a[i]==1) continue;
  	
  	else if((i-res)>=1&&a[i-res]) 
  	{
  		cout<<res<<" ";
	  }else if((i+res)<=n&&a[i+res])
	  {
	  	cout<<res<<" ";
	  }else 
	  {
	  	res++;
	  }
  }
  return 0;
}超时了不出所料 
*/
#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int b[5003],n,t,flag=0;
char a[5003];
int main()
{
  // 请在此输入您的代码
  cin>>n;
  for(int i=0;i<n;i++)//判断是否是全0 是的话需要输出n个-1 
  {
    cin>>a[i];
    if(a[i]=='1')flag=1;
  }
  if(!flag)
  {
    for(int i=0;i<n;i++)
      cout<<-1<<" ";;
    return 0;
  }
  t=-1;
  //从左往右数最靠进的1的位置  0开头的话都是0 反向的时候需要再处理下 
  for(int i=0;i<n;i++)
  {
    if(a[i]=='0'&&t!=-1)b[i]=i-t;
    if(a[i]=='1')t=i;
  }
  
  t=n;//开始反向处理 为1的话 更新一下位置 为0的话需要看右边的1的位置 如果此位置第一次更让新过
  //则再算一下这次的位置 取最小值如果第一次没更新过那就直接算这次的位置  b[i]是i点距离1最近的距离 
  for(int i=n-1;i>=0;i--)
  {
    if(a[i]=='0'&&t!=n)
    {
      if(b[i]!=0)b[i]=min(b[i],(t-i));
      else b[i]=t-i;
    }
    if(a[i]=='1')t=i;
  }
  for(int i=0;i<n;i++)
  {
    if(b[i]!=0)cout<<b[i]<<" ";
    // cout<<b[i]<<" ";
  }
  return 0;
}

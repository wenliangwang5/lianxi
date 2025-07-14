#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int n;
int a[N],s[N];//a数组存数值，数组标记唯一性 

int main()
{
cin>>n;
for(int i=0;i<n;i++) scanf("%d",&a[i]);

int res=0;
for(int i=0,j=0;i<n;i++)//j i分别为头 尾指针 
{
	
	s[a[i]]++;//枚举尾部 修改标记 
	while(s[a[i]]>1) //若尾部标记出现重复 头部j指针需要往后移动  同时标记减一 
	{
		s[a[j]]--;
		j++;
	}
	//while循环完成后是为一个符合条件的答案 
	res=max(res,i-j+1);//根据坐标更新最大长度
	 
}

printf("%d",res); 
  return 0;
}
 

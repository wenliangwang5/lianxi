#include<bits/stdc++.h>
#include<iostream>
using namespace std;

const int N=100010;

int n;
int lowbit(int x)
{
	return x&-x;//两个相反数位进行与位运算仅仅最后一位1能计算出其余都为0
	//因为-x是ｘ取反加一得到的　最后一位一样 
}
int main()
{
  scanf("%d",&n);
  
  while(n--)
  {
  	int res=0;
  	int a;
  	scanf("%d",&a); //长度位 a的数组 
  	
  	while(a) a-=lowbit(a),res++;//每次去除一位1的同时把这位1减去 答案加一 
  	
  	printf("%d ",res);//最后输出答案即可 
  }
  return 0;
}


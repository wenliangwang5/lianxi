#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1000010;
bool cmp(vector<int> &A,vector<int> &B)//比较函数 
{
	if(A.size()!=B.size()) return A.size()>B.size();//若A数的长度不等于B数的长度 输出比较结果  
	for(int i=A.size()-1;i>=0;i--)//若A数的长度等于B数的长度　进行逐个位置的判断 
	{
		if(A[i]!=B[i]) return A[i]>B[i]; //输出逐个位置判断的结果 
	}
	
	return true;//若最后都相等 怎样处理都可 
}

vector<int> sub(vector<int> &A,vector<int> &B)
{
	vector<int> c;//答案容器 
	for(int i=0,t=0;i<A.size();i++)
	{
		t=A[i]-t;//借位预处理，初始不借位，t=0 
		if(i<B.size()) t-=B[i];//若B数没减完 进行减法 
		c.push_back((t+10)%10);//防止负数出现，预先加10，再进行求余算出本位位置 
		
		if(t<0) t=1;//出现负数的话进行借位 ，否则置为0 
		else t=0;
	 } 
	 
	 while(c.size()>1&&c.back()==0) c.pop_back();//防止逆向输出时数字前置0，若尾部有0就剔出 
	 
	 return c;
	 
}

int main()
{
  string a,b;//字符串存储输入的数字 
  cin>>a>>b;
  vector<int> A,B;//转化为数字存入A  B两容器里 
  for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');//逆向从小到大存入容器里 
  for(int i=b.size()-1;i>=0;i--) B.push_back(b[i]-'0');

if(cmp(A,B))//利用比较函数判断下一步进行何种操作 
{
	auto c=sub(A,B);//若A 大于B 进行A-B操作 
	for(int i=c.size()-1;i>=0;i--) printf("%d",c[i]);// 逆向输出答案 
}
else {//若B大于A 
	auto c=sub(B,A); //先进行B-A 
	cout<<"-";//输出结果时带上符号即可 
	for(int i=c.size()-1;i>=0;i--) printf("%d",c[i]);
}
  return 0;
}


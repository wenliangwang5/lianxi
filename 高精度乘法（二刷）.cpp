#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;

vector<int> mui(vector<int> &A,int b)
{
	vector<int> c;
	int t=0;// 进位标记 
	for(int i=0;i<A.size();i++)
	{    //数字没计算完成 
		if(i<A.size()) t+=A[i]*b;//乘 
		c.push_back(t%10);//求余计算本位 
		t/=10;//进位更新 
	}
	
	if(t) c.push_back(t);//最后进位结果不为零也计入答案中 
	while(c.size()>1&&c.back()==0) c.pop_back();//乘数为0时，消除多余的0 
	return c;
	
}
int main()
{
   string s;//字符串存储数字 
   int b;//乘数 
   cin>>s>>b;
   vector<int> A;
   for(int i=s.size()-1;i>=0;i--) A.push_back(s[i]-'0');//逆向存储转化为数字 
   
   auto c=mui(A,b);
   
   for(int i=c.size()-1;i>=0;i--) cout<<c[i];//逆向输出 
    
  return 0;
}


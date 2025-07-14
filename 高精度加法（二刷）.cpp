#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1000010;
vector<int> add(vector<int> &A,vector<int> &B){
	
	int t=0;//进位变量 初始化为0 
	vector<int> c;//存储答案的容器 
	for(int i=0;i<A.size()||i<B.size();i++)
	{
		if(i<A.size()) t+=A[i];//上一位的进位与本位A，B分别相加 
		if(i<B.size()) t+=B[i];
		c.push_back(t%10);//利用求余算出本位的数字 
		t/=10;//计算下一位的进位 
	}
	
	if(t) c.push_back(t);//若最后一位进位仍然存在 ，存入答案容器里 
	
	
	return c;
	
} 

int main()
{  
   string a;//以字符形式输入便于操作 
   string b;
   vector<int> A,B;//创建容器存储 
   cin>>a>>b;
   for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');//逆向从小到大存储 数字，方便操作 
   for(int i=b.size()-1;i>=0;i--) B.push_back(b[i]-'0');
   
   auto c=add(A,B);
   
   for(int i=c.size()-1;i>=0;i--) cout<<c[i];//答案是逆向存储的，需要逆向输出 

  return 0;
}


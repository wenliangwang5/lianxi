#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;

vector<int> div(vector<int> A,int b,int &r)
{
	vector<int> c;// 答案容器 
	r=0;//进位变量 
	for(int i=A.size()-1;i>=0;i--) 
	{
		r=r*10+A[i];//余数处理与本位相加 
		c.push_back(r/b);//除法计算处理 
		r%=b;//余数更新处理 
		
	}
	
	reverse(c.begin(),c.end());//逆序反转处理 
	while(c.size()>1&&c.back()==0) c.pop_back();//处理前导0的情况 
	return c;
	
}
int main()
{
	string s;
	cin>>s;
	int b;
	cin>>b;
	int r;
	vector<int> A;
	for(int i=s.size()-1;i>=0;i--) A.push_back(s[i]-'0');
	//除法函数 
	auto c=div(A,b,r);
	//逆向输出结果 
	for(int i=c.size()-1;i>=0;i--) cout<<c[i];
	//输出余数 
	cout<<endl<<r;

  return 0;
}


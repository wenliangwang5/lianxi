#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
vector<int> mul(vector<int> A,int b)
{
	vector<int> c;//动态数组vector 
	int t=0;//进位变量 
	for(int i=0;i<A.size()||t;i++)//循环遍历每一位 
	{
		if(i<A.size()) t+=A[i]*b;
		//数字没处理完 上一位进位加上本位之积 
		c.push_back(t%10);//本位求余得结果 
		t/=10;//为下一位做进位预处理 
		
	}
    return c;	
}

int main()
{
  string s;
  int b;
  cin>>s>>b;
  vector<int> A;
  for(int i=s.size()-1;i>=0;i--) A.push_back(s[i]-'0');
  
  auto c=mul(A,b);
  
  for(int i=c.size()-1;i>=0;i--) printf("%d",c[i]);

  return 0;
}



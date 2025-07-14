#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;

bool solve(string s)
{
 stack<char> l;//栈存储左字符
	for(int i=0;i<s.size();i++)
  {
  	if(s[i]=='('||s[i]=='{'||s[i]=='[') l.push(s[i]);//如果是左字符入栈
  	else if(s[i]=='}'||s[i]==']'||s[i]==')')//如果是右字符
  	{
  		if(l.size())//且栈不为空 进行判断是否相符
  		{
  			auto x=l.top();//不相符直接输出返回
  			if((s[i]==')'&&x!='(')||(s[i]=='}'&&x!='{')||(s[i]==']'&&x!='[')) return false;
  			l.pop();//完毕后字符出栈继续判断
		  }
		  else return false;//若此时栈为空 直接输出判负
	  }
  	
  }
   if(l.size()) return false;//最后栈里还有的话判负
   else  return true;//空的话证明输出完了正确
}
int main()
{
  string s;
  cin>>s;
  cout<<solve(s)<<endl;
  return 0;
}



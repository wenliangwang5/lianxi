#include<bits/stdc++.h>
#include<iostream>
typedef long long ll;
const int N=100010;
using namespace std;
int son[N][26],cnt[N],idx;//son数组存储tire数 cnt 存储以那些字符结尾的字符数
//idx是数上的节点索引 
char str[N];//要输入的字符串 
void insert(char str[])//插入字符串 
{
	int p=0;
	for(int i=0;str[i];i++)//从前往后遍历字符串 
	{
		int u=str[i]-'a'; //计算字符数值 
		if(!son[p][u]) son[p][u]=++idx;//如果这个字符在树上没出现 创建一个新的点 索引加一 
		
		p=son[p][u];//无论是否找到 树的节点索引往下更新为下次做准备 
	}
	
	cnt[p]++;//最后以该索引的字符的字符数量加一 
}

int query(char str[])
{
	int p=0;
	for(int i=0;str[i];i++)
	{
		int u=str[i]-'a';// 转化为数值 
		if(!son[p][u]) return 0;// 如果该字串的某个字符没有在这个串上找到 则直接返回 
		
		p=son[p][u];//往下更新下一个节点的索引 
	}
	
	return cnt[p];//找到最后返回p 索引的字符的数量 
}
int main()
{
	int n;
 cin.tie(0);
 cout.tie(0);
 ios::sync_with_stdio(0);
 cin>>n;
 while(n--)
 {
 	char op[2];
 	
 	cin>>op>>str;
 	if(op[0]=='I') insert(str);
 	else cout<<query(str)<<endl;
 }
 
 
  return 0;
}


#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=200010,M=1010;
int n1,n2,m;
int h[N],e[N],ne[N],idx;
int match[N];
bool st[N];
void add(int a,int b)
{
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
bool find(int x)//对于一个男生来说 试着找到和他匹配的妹子 
{
	for(int i=h[x];i!=-1;i=ne[i])//所有和他有关联的妹子 
	{
		int j=e[i];
		if(!st[j])//如果该妹子没有被访过
		//我们可以试试让这个妹子的主人再换个妹子 或者直接占有 
		{
			st[j]=true;// 标记一下这个妹子不能被访问了 
			if(match[j]==0||find(match[j]))//直接占有或者换成功了皆大欢喜 
			{
				match[j]=x;
				return true;
			}
		}
		
		
	}
	return false;//遍历所有可选的妹子都换不过来那就完蛋了 
}
int main()
{
	
	cin>>n1>>n2>>m;
	memset(h,-1,sizeof h);
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		add(a,b);
	}
  int res=0;
   for(int i=1;i<=n1;i++)
   {
   	 memset(st,false,sizeof st);//注意 在为每一个男生匹配时需要重置访问变量
		//保证每个妹子只能被访问一次 否则可能会出现错误 
   	 if(find(i)) res++;//可以匹配上 匹配数加一 
   }
   cout<<res<<endl;
  return 0;
}



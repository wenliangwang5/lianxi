#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<cstring>
#include<cmath>
#include<stack>
#include<string>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define endl '\n'
#define deb(x) cout<<"#"<<x<<" "
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef pair<int,int> PII;
const int N=200010,M=1010,nod=1e9+7;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
unordered_map<string,int> d;
queue<string> q;

int bfs(string s){
	string en="12345678x";
    q.push(s);//队列 距离数组 预处理 
	d[s]=0;
	while(q.size()){//队列不空  
		auto t=q.front();// 取头节点 
		q.pop();//出队列 
		int dist=d[t];//距离取出来 
		if(t==en) return dist;
		
		int k=t.find('x');
		int x=k/3;
		int y=k%3;
		for(int i=0;i<4;i++)//开始进行变换 
		{
			int a=x+dx[i];
			int b=y+dy[i];
			if(a>=0&&a<3&&b>=0&&b<3)// 符合条件  
			{
				swap(t[k],t[3*a+b]);// 进行交换 
				if(!d[t]){//新情况 加入队列 
					q.push(t);
					d[t]=dist+1;//距离数组加一 
				}
				swap(t[k],t[3*a+b]);//恢复现场 
			}
			
		}
	}	
	return -1;
}
signed main()
{
  string s;
  for(int i=0;i<9;i++)//初始字符串输入 
{
	char a;
	cin>>a;
	s+=a;
}
cout<<bfs(s)<<endl;
  return 0;
}



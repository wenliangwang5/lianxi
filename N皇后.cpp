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
char m[10][10];
int col[M],dg[N],udg[N];//列 正对角线 反对角线的标记数组 
int n;
void dfs(int x){
	if(x==n){//搜索到头进行输出 
		for(int i=0;i<n;i++)
		{
			cout<<m[i]<<endl;
		}
		cout<<endl;
		return ;
	}
	
	for(int i=0;i<n;i++)//对每一列进行检索 
	{
		if(!col[i]&&!dg[x-i+n]&&!udg[x+i]){//判断 列 正反对角线是否符合条件 
			m[x][i]='Q';//修改地图 修改标记数组 
			col[i]=dg[x-i+n]=udg[x+i]=1;
			dfs(x+1);//下一层搜索 
			m[x][i]='.';//恢复现场 
			col[i]=dg[x-i+n]=udg[x+i]=0;
		}
	}
}
signed main()
{ 
  cin>>n;
  for(int i=0;i<n;i++)//初始化地图 
  {
  	for(int j=0;j<n;j++)
  	{
  		m[i][j]='.';
	  }
  }
  dfs(0);//以行为变量搜索 
  return 0;
}



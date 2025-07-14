#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,sum,ans;// n表示美味程度 sum是每种方案的美味程度 ans是方案数 
int a[N];//临时方案数存储 
int x[500000][11];//每种合格的方案 
void add()//合格方案加入 
{
	for(int i=1;i<=10;i++)
	{
		x[ans][i]=a[i];
	}
}
void dfs(int x)
{
	if(x>11) return; //超出边界 返回 
	if(sum==n&&x==11) {//前10步方案合格 加入 
	    add();
	    ans++;
		return ;
	}
	if(sum>n) return ;//途中某步美味数超出 剪枝返回 
	
	for(int i=1;i<=3;i++)//不同的克数依次放置 注意恢复现场 
	{
		a[x]=i;
		sum+=i;
		dfs(x+1);
		a[x]=0; 
		sum-=i;
		
	 } 
	
}

int main()
{
  cin>>n;
  
  dfs(1);
  if(ans) cout<<ans<<endl;//方案数不为0输出 
   else{//为0 返回 
   	cout<<ans;
   	return 0;
   }//打印方案 
  for(int i=0;i<ans;i++)
  {
  	for(int j=1;j<=10;j++)
  	{
  		cout<<x[i][j]<<" ";
	  }
	  cout<<endl;
  }
  return 0;
}



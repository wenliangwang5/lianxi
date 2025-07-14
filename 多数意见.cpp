#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;


void solve()
{
	int n;//每次的牛的数目 
	cin>>n;
	vector<vector<int>> pos(n+1);//二维数组存储喜好每种草的牛的位置 一维为喜好 二维为位置 
	
	for(int i=1;i<=n;i++)
	{
		//x为喜好 i为第几次输入即位置 
		int x;
		cin>>x;
		pos[x].push_back(i);//相应喜好的草的位置的数目加一 
	}
vector<int> ans;//答案数组 
for(int i=1;i<=n;i++)//从最小喜好的草开始遍历 
   for(int j=0;j+1<pos[i].size();j++)//如果没有这种喜好的草或者这种喜好的草仅有一个 循环不执行 
       if(pos[i][j+1]-pos[i][j]<=2) {ans.push_back(i);break;}//否则从前往后依次计算间隔  符合相应间隔条件的计入答案 
       
       if(ans.size()) for(auto item:ans) cout<<item<<" \n"[item==ans.back()];//答案数组不为空 依次输出 若当前答案不为最后一个 输出” “否则输出”\n“、 
	   else cout<<-1<<"\n";//答案为空 输出-1 
}
int main()
{ 
  int m;
  cin>>m;
  while(m--)
  {//多次查询 
  	solve();
  }
	
  return 0;
}


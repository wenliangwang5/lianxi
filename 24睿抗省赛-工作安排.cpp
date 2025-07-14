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
int t;
int f[5010];//类01背包做法 
struct node{
	int t,d,p;
};
bool cmp(node a,node b){
	return a.d<b.d;
}
void solve(){
	int n;
	cin>>n;
	vector<node> x;
	for(int i=1;i<=n;i++)
	{
		int t,d,p;
		cin>>t>>d>>p;
		x.push_back({t,d,p});
	}//根据截止时间排序 可为一种可能性方案之一 
	memset(f,0,sizeof f);
	sort(x.begin(),x.end(),cmp);//按截止时间排序 保证了处理每一个任务的无后效性 
	
	for(int i=0;i<n;i++)//对于每个工作进行01背包处理 保证取得最优解有。 
	{
		auto q=x[i];
		int t=q.t,d=q.d,p=q.p;
		if(t>d) continue;
		for(int j=5000;j>=t;j--)//这里需要优化为1维 因为n=5000 开二维会爆掉 
		{
			f[j]=max(f[j],f[min(j,d)-t]+p); //考虑时间大于截止时间 取截止时间限制 考虑时间小于截至时间大于等于处理时间取考虑时间
			//保证了递推状态是从有效状态转换过来的 
			//本次任务分配是由 截止时间 和 考虑时间 的最小值减去 处理时间
			//的时间点上的最优解递推过来的 和上一轮的dj 取最大值 
			//cout<<j<<" "<<f[j]<<endl;
		}
		
	}
	cout<<f[5000]<<endl;
	
}
signed main()
{
   cin>>t;
   for(int i=1;i<=t;i++)
   {
   	solve();
   }
  
  return 0;
}



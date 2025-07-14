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
int n;
void solve(){
	int k;
	cin>>k;
	int f[k+1];
	int len=0;
	memset(f,0,sizeof f);
	vector<int> x(k+1);
	for(int i=1;i<=k;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a) x[i]++;
		if(!b) x[i]++;//原先数据计算好 
	}
	
	vector<int> x1(k+1);
	for(int i=1;i<=k;i++){
		int t;
		cin>>t;
		x1[i]=x[t];//按照正确数据进行排序 找到非递增序列最大长度（即合法最大长度）
		//剩余不合法的几个即使说谎的  
		//ps：因为相同大小位次随意交换  按标准顺序排好后，不满足非递增序列的话一定偏大或者偏小了（即出问题了） 
		//deb(x1[i]);
	}
	f[0]=2e9;
	
	for(int i=1;i<=k;i++)
	{
		int l=0,r=len;
		while(l<r){//最长非上升子序列 
			int mid=l+r+1>>1;
			if(f[mid]<x1[i]) r=mid-1;//找到序列中大于等于当前数的位置 
			else l=mid;
		}
		f[l+1]=x1[i];//下一个位置把数放上面（如果是最后一个数等同于加长，否则等同于更新替换） 
		//替换是为了保证后序序列最优解（即最长，且不影响当前最大长度）
		len=max(len,l+1);//取一下 长度的最大值 
		//deb(len);
	}
	
	cout<<k-len<<endl;
	
}
signed main()
{
  cin>>n;
  for(int i=1;i<=n;i++){
  	solve();
  }

  return 0;
}



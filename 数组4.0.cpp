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
int t,n;
int a[N];

int main()
{
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	unordered_map<int,int> m;
  	for(int i=1;i<=n;i++)
  	{
  		cin>>a[i];
  		m[a[i]]++;//每种节点的个数 
	  }
	 vector<int> x;
	 for(auto t:m) x.push_back(t.x);//去重放入数组里 
	 
	 sort(x.begin(),x.end());//排序 
	 int len=x.size(),ans=0;
	 if(len==1) {//长度为1直接输出n-1 
	 	cout<<n-1<<endl;
	 	continue;
	 }
	 for(int i=0;i<len;i++) //否则就逐一判断 
	 {
	 	int c=m[x[i]];//预准备节点数 
	 	while(i+1<len&&x[i]+1==x[i+1])//如果有节点成段的继续判断 边数归一 （成段进行联通的话仅需一条边） 
	 	{
	 	   c=1;
	 	   i++;//继续比较 
		 }
		 ans+=c;//边数加上 
		 
	  } 
	cout<<ans-1<<endl;//若最后一个成段的话 会多加一条边 ：不成段的话 会把所有点加上 但是前面成段的和最后节点之间还多加了1  最后都要减去1 
  }

  return 0;
}



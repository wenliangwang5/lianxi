#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
// ps:经典二分 如果用朴素做法的话会超时爆掉的 朴素做法时n*n n=1e5 
//如果用二分的话 是n*log n不会超时 

int n,m;//数组长度和封印层数 
vector<ll> a;//数组容器 到1e9的范围了 开long long  
void solve(int p,int q)//利用二分找左右边界索引 相减即可 
{
	int l,r;
	int l1=1,r1=n;
    l=lower_bound(a.begin(),a.end(),p)-a.begin();
	//lower_bound是利用二分搜索>= p的第一个数并返回其迭代器 再减去初始迭代器即为索引 
    r=upper_bound(a.begin(),a.end(),q)-a.begin();
    //upper_同上 不过是返回>q的第一个数的迭代器 减去初始迭代器即可
	//（这里的迭代器可以理解为类似于索引的结构） 仅仅vector的迭代器相减可得到下标索引 
	cout<<r-l<<endl;//相减得数量 
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	ll x;
  	cin>>x;
  	a.push_back(x);
  }//数据输入 
  sort(a.begin(),a.end());//排序 
  cin>>m;
  for(int i=1;i<=m;i++)
  {
  	int p,q;
  	cin>>p>>q;//左右数据 
  	solve(p,q);//解决 
  }
  return 0;
}



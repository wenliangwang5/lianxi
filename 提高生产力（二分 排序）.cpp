#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=200010;
int n,q;
vector<int> a(N),b(N),c(N);
int main()
{
  cin>>n>>q;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n;i++) cin>>b[i];
  for(int i=1;i<=n;i++) c[i]=a[i]-b[i];//算出每一个农场最晚关门的极限时间 
  sort(c.begin()+1,c.end(),greater<int>());//把所有农场的极限时间排个序 从大到小 越大证明时间充足 
  while(q--)//q次询问 
  {
  	int v,s;
  	cin>>v>>s;
  	if(s<c[v]) cout<<"YES"<<endl;//如果第V位置的极限时间是大于牛牛的起床时间的话 证明符合条件 
  	else cout<<"NO"<<endl;//否则输出输出NO 
  }

  return 0;
}


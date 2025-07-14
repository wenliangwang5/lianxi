#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int sum,a[N];
int n,ans;
//每组指派都只能从相邻两边取牌补齐最优   以最左边为起点 只能从右边补齐 那么下一个也只能从右边补齐 
//以此类推 需要预处理一下每组缺少的或者多出的 多出的给下一个 缺的从下一个那透支  
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++){
  	cin>>a[i];
  	sum+=a[i];// 计算和 
  }  
  int p=sum/n;
  for(int i=1;i<=n;i++) a[i]=a[i]-p;//预处理 
  
  for(int i=1;i<=n;i++)
  {
  	if(a[i]>0) {//多的排给下一个（因为上一个已经满了） 
  		a[i+1]+=a[i];
  		a[i]=0;
  		ans++;
	  }
  	if(a[i]<0)//少的从下一个那透支 
  	{
  		a[i+1]-=abs(a[i]);
  		a[i]=0;
  		ans++;
	  }
	  if(a[i]==0) continue;
	  
  }
  
   cout<<ans;
  return 0;
}



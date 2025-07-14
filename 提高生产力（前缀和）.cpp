#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=200010;
int a[N],b[N],s[N*5];
int n,q,max1=1;
 
int main()
{
  cin>>n>>q;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n;i++) 
  {
  	cin>>b[i];
  	if(a[i]>b[i])
  	{
  			max1=max(max1,(a[i]-b[i])); //计算极限最晚起床时间 
  			s[a[i]-b[i]]++;//计算过后此时间位置上+1 
	  }
	  
	  
  }
  for(int i=1;i<=max1;i++) s[i]+=s[i-1];//从前往后依次计算前缀和 计算从1开始到i这个时间一共会有几个农场极限时间 
  //这里的s[i]指的是一共i点起床错过了几个农场 
  while(q--)
  {
  	
  	int v,w;
  	scanf("%d%d",&v,&w);
  	if(w>max1) //当起床时间比极限时间还大的话直接输出NO即可 
  	{
  		cout<<"NO"<<endl;
  		continue;
	  }
	  //max1是最晚的时间  s[max1]是所有合适的农场  s[w]表示的是w点起错过的农场 相减表示还能去几个农场 如果大于V的话 符合条件 
  	if((s[max1]-s[w])>=v) 
	 {
	 	 printf("YES\n");
	 }
  	else printf("NO\n");
  }
  return 0;
}


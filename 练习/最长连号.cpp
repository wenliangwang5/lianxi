#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int a[N]; 
int ans=1,res=0;

int main()
{
	cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }
  int p=a[1];
  
  // 用p纪录上个值 本位的值和上个比较 如果差一 继续比 
  //不符合的时候更新下答案 重置一下ans 最后比较完再更新下 res即可 
  for(int i=2;i<=n;i++)
  {
    if(p+1==a[i])
	{
		p=a[i];
		ans++;
	   }  
	else {
		res=max(ans,res);
		ans=1;
		p=a[i];
	}
  }
  res=max(res,ans);
  cout<<res;
  return 0;
}



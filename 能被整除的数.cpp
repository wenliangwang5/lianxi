#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=20;
int p[N];
int n,m;
 
int main()
{

  cin>>n>>m;
  for(int i=0;i<m;i++) cin>>p[i];//m质数输入 
  
  ll res=0;
  for(int i=1;i<1<<m;i++)//m个质数有2的m次方-1的情况 依次枚举每种情况 
  {
  	int t=1,cnt=0;//t是质数乘积  cnt 是集合的质数数量 
  	for(int j=0;j<m;j++)//枚举判断每个质数是否在集合内 
  	{
  		if(i>>j&1)//如果在的话 
  		{
  			if((ll)t*p[j]>n)//质数乘积大于n 直接退出 
  			{
  				t=-1;
  				break;
			  }
  			//乘积更新 集合质数数量更新 
  			t*=p[j];
  			cnt++;
		  }
  		
	  }
  	if(t!=-1)//不是异常结束的话 答案按奇偶进行更新 
  	{
  		if(cnt%2) res+=n/t;
  		else res-=n/t;
	  }
  }
  
  cout<<res;
  return 0;
}


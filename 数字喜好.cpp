#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
//if条件判断即可
 
bool check1(int x)// 条件一检查 
{
	return  x%2==0;
}
bool check2(int x)//条件二检查 
{
	if(x>4&&x<=12) return true;
	else return false;
}
int main()
{
  int x;
  cin>>x;//分别判断即可 
  if(check1(x)&&check2(x)) cout<<1<<endl;
  else cout<<0<<endl;
  
  if(check1(x)||check2(x)) cout<<1<<endl;
  else cout<<0<<endl;
  
  if((check1(x)&&!check2(x))||(!check1(x)&&check2(x))) cout<<1<<endl;
  else cout<<0<<endl;
  
  if(!check1(x)&&!check2(x)) cout<<1<<endl;
  else cout<<0<<endl;

  return 0;
}



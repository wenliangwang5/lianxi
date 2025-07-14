#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
vector<int> d;
void mul(vector<int> &d,int b)
{
	int t=0;
	for(int i=0;i<d.size();i++)
	{
		t+=d[i]*b;
		d[i]=t%10;
		t/=10;
	}
	if(t) d.push_back(t);
}
void add(vector<int> &d,int k,int b)
{
	int t=b;
	for(int i=k;i<d.size();i++)
	{
		t+=d[i];
		d[i]=t%10;
		 t/=10;
	}
	if(t) d.push_back(t);
}
int main()
{
  int n;
  string s;
  cin>>n>>s;//输入要×的数和输入字符串 
  reverse(s.begin(),s.end());//字符串反转从前到后，从小到大 
  for(int i=0;i<s.size();i++)
  {
  	if(s[i]!='.') d.push_back(s[i]-'0');//把除了小数点以外的数从小到大都放进容器里 
  }
  int x=s.find('.');
  while(n--) mul(d,2);
  if(d[x-1]>=5) add(d,x,1);
  
  for(int i=d.size()-1;i>=x;i--) cout<<d[i];
  
  return 0;
}


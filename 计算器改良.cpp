#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
string s;
vector<int> a1,a2,x1,x2;
char x;
bool flag;
void solve(int &i,char o)
{
	if(s[i]>='a'&&s[i]<='z') 
	{
		x=s[i];
		if(!flag) 
		{
			if(o=='-') x1.push_back(-1);
			else x1.push_back(1);
		}
		else 
		{
			if(o=='-') x2.push_back(-1);
			else x2.push_back(1);
		}
		return ;
	}
	if(!flag) {
  	  	int a=s[i]-'0';
  	  	while(i+1<s.size()&&s[i+1]>='0'&&s[i+1]<='9') {
  	  		a=a*10+(s[++i]-'0');
			}
			if(o=='-') a=-a;
			if(i+1<s.size()&&s[i+1]>='a'&&s[i+1]<='z') x1.push_back(a),i++,x=s[i];
			else a1.push_back(a);
		}
		else {
			int a=s[i]-'0';
			while(i+1<s.size()&&s[i+1]>='0'&&s[i+1]<='9') {
  	  		a=a*10+(s[++i]-'0');
			}
			if(o=='-') a=-a;
			if(i+1<s.size()&&s[i+1]>='a'&&s[i+1]<='z') x2.push_back(a),i++,x=s[i];
			else a2.push_back(a);
		}	
}
int main()
{
  cin>>s;
  
  for(int i=0;i<s.size();i++)
  {
  	
  	if(s[i]=='=') 
  	{
  		flag=true;
		continue;
	  }
  	if(s[i]>='0'&&s[i]<='9')
  	{
  	  solve(i,'+');
	  }
	  else {
	  	if(s[i]=='-')
	  	{   i++;
	  		solve(i,'-');
		  }
		  else {
		  	i++;
		  	solve(i,'+');
		  }
	  }
  	
  }
  int a=0,b=0,c=0,d=0;
  if(a1.size()) for(int i=0;i<a1.size();i++) a+=a1[i];
  if(a2.size()) for(int i=0;i<a2.size();i++) b+=a2[i]; 
  if(x1.size()) c=x1[0];
  if(x2.size()) d=x2[0];
  //cout<<a<<" "<<b<<" "<<c<<" "<<d;
  a=a-b;
  d=d-c;
  if(a==0) printf("%c=%.3lf",x,0);
  else  printf("%c=%.3lf",x,(1.0*a)/d);
   return 0;
}



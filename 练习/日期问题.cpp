#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int a1[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
string s,a,b,c;
set<string> m;
string checkn(string x)
{
	if(x>="60") return "19"+x;
	else return "20"+x;
}
bool checky(string x)
{
	if(x>="01"&&x<="12") return true;
	else return false; 
}
bool checkr(string x,string y,string z)
{
	int n=0;
	for(int i=0;i<4;i++)
	{
		n+=x[i]-'0';
		if(i<=2) n*=10;
	}
	int ye=0;
	for(int i=0;i<2;i++)
	{
		ye+=y[i]-'0';
		if(i<=0) ye*=10;
	}
	int r=0;
	for(int i=0;i<2;i++)
	{
		r+=z[i]-'0';
		if(i<=0) r*=10;
	}
   if(ye==2)
   {
   		if(n%400==0||(n%4==0&&n%100!=0)) 
   		{
   			if(r<=29) return true;
		   }
		   else 
		   {
		   	if(r<=28) return true;
		   }
   }
   else {
   	if(r<=a1[ye]) return true;
   }
   
   return false;
}
int main()
{
  cin>>s;
  a=s.substr(0,2);
  b=s.substr(3,2);
  c=s.substr(6,2);
  if(checky(b)&&checkr(checkn(a),b,c)) m.insert(checkn(a)+'-'+b+'-'+c);
  if(checky(b)&&checkr(checkn(c),b,a)) m.insert(checkn(c)+'-'+b+'-'+a);
  if(checky(a)&&checkr(checkn(c),a,b)) m.insert(checkn(c)+'-'+a+'-'+b);
  for(auto x:m)
  {
  	cout<<x<<'\n';
  }
  return 0;
}



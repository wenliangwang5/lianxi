#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
string s; 
void str(string p)
{
	s+=p;//×Ö·û´®¼Ó 
	cout<<s<<endl;
}
void sub(int a,int b)
{
	s=s.substr(a,b);//½ØÈ¡×Ö·û´® 
	cout<<s<<endl;
}
void inse(int a,string p)
{
	s=s.insert(a,p);//²åÈë×Ö·û´® 
	cout<<s<<endl;
}
void fin(string p)
{
	if(s.find(p)<s.size()) cout<<s.find(p)<<endl;//²éÕÒ×Ö·û´® ÕÒ²»µ½µÄ»°·µ»ØÒ»¸ö¹îÒìÊý×Ö 
	else cout<<-1<<endl;
}
int main()
{
  cin>>n;
  cin>>s;
  while(n--)
  {
  	int x;
  	cin>>x;
  	if(x==1) 
  	{
  		string p;
  		cin>>p;
  		str(p);
	  }
	else if(x==2){
		int a,b;
		cin>>a>>b;
		sub(a,b);
	}
	else if(x==3)
	{
		int a;
		string p;
		cin>>a>>p;
		inse(a,p); 
	}
	else  {
		string p;
		cin>>p;
		fin(p);
	}
  	
  }

  return 0;
}



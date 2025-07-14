#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1010;
int sum;
bool flag=false;
int main()
{ 
  
  string s;
  cin>>s;
  vector<int> a;
  for(int i=0;i<s.size();i++)
  {
  	a.push_back(s[i]-'0');
  	sum+=a[i];
  }
  
  for(int i=2;i<=sum/i;i++)
  {
  	if(sum%i==0) 
  	{
  		flag=true;
  		break;
	  }
  }
if(sum==0||sum==1) cout<<"no";
else if(sum==2||!flag) cout<<"yes";
else cout<<"no"; 
  return 0;
}


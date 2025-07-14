#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
string s;
void solve()
{
	vector<int> x;
  	cin>>s;
  	for(int i=0;i<s.size();i++)
  	{
  		if(s[i]!='l'&&s[i]!='q'&&s[i]!='b') x.push_back(i);
	  }
	  if(x.size()==0) 
	  {
	  	cout<<"Yes"<<endl; 
	  	return ;
	  }
	  int l=x[0],r=x[x.size()-1],l1=x[0],r1=x[x.size()-1];
	  while(l<=r&&s[l]==s[r]) 
	  {
	  	l++;
	  	r--;
	  }
  	
  	while(l1>=0&&r1<s.size()&&s[l1]==s[r1])
  	{
  		l1--;
  		r1++;
	  }
	  
	  if(l1<0&&l>r) cout<<"Yes"<<endl;
	  else cout<<"No"<<endl;
}
int main()
{
  cin>>n;
  
  while(n--)
  {
  	solve();
  }
 
  return 0;
}



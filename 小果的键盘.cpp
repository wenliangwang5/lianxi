#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,ans,c=1;
string s; 
int main()
{

  cin>>n>>s;
  
  for(int i=0;i<n-1;i++)
  {
  	if(s[i]=='V'&&s[i+1]=='K'){
  		ans++;
  		s[i]='.';
  		s[i+1]='.';
	  }
	  
  }
  
  for(int i=0;i<n-1;i++)
  {
  	if(s[i]=='V'&&s[i+1]=='V')
  	{
  		ans++;
  		s[i+1]='K';
  		break;
	  }
	  
	  if(s[i]=='K'&&s[i+1]=='K')
	  {
	  	ans++;
	  	s[i]='V';
	  	break;
	  }
  }
  cout<<ans;
  return 0;
}



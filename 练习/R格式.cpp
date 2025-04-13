#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=1010,M=1010;
int n,idx;
string s;
vector<int> p;
void mul()
{
	for(int i=1;i<=n;i++)
	{
		int t=0;
		for(int j=0;j<p.size();j++)
		{
			p[j]=p[j]*2;
			t+=p[j];
			p[j]=t%10;
			t=t/10;
		}
		
		if(t) p.push_back(t);
	}
	
	
}
int main()
{
    cin>>n>>s;
   for(int i=s.size()-1;i>=0;i--) 
   {
   	if(s[i]!='.') p.push_back(s[i]-'0');
   	else idx=s.size()-1-i;
   }
   mul();
   if(p[idx-1]>=5) p[idx]++;
   for(int i=p.size()-1;i>=idx;i--) cout<<p[i];
  return 0;
}



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
const int N=200010,M=1010;
int n,k;
unordered_map<int,int> m;
bool flag=true;
int main()
{
  cin>>n>>k;
  for(int i=1;i<=k;i++) {
  	int x;
  	cin>>x;
  	m[x]=1;
  }
  int p=k;
  while(p--)
  {
  	int sum=0;
  	for(int i=1;i<=n/k;i++)
  	{
  		int t;
  		cin>>t;
  		if(m[t]) sum++;
  		
	  }
	  if(sum>1) flag=false;
  }
   if(flag) cout<<"\"MiaoW\""<<endl;
   else cout<<"\\QAQ/"<<endl;
  return 0;
}



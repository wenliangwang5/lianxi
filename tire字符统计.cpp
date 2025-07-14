#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int son[N][26],cnt[N],idx;
char str[N];
int n;
void inse(char str[])
{
	int p=0;
	for(int i=0;str[i];i++)
	{
		int u=str[i]-'a';
		if(!son[p][u]) son[p][u]=++idx;
		p=son[p][u];
	}
	cnt[p]++;
	
}
int query(char str[])
{
	int p=0;
	for(int i=0;str[i];i++)
	{
		
		int u=str[i]-'a';
		
		if(!son[p][u]) return 0;
		
		p=son[p][u];
	}
	return cnt[p];
	
}
int main()
{
  cin>>n;
  while(n--)
  {
  	char op[2];
  	cin>>op>>str;
  	if(op[0]=='I') inse(str);
  	else cout<<query(str)<<endl;
  	
  }

  return 0;
}



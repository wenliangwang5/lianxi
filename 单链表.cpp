#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int head,e[N],en[N],idx;
void init()
{
	head=-1;
	idx=0;
}
void add_head(int k)
{
	e[idx]=k;
	en[idx]=head;
	head=idx;
	idx++;
}
void add(int k,int t)
{
	e[idx]=t;
	en[idx]=en[k];
	en[k]=idx;
	idx++;
}

void remove(int k)
{
	en[k]=en[en[k]];
}
int main()
{
  int m;
  cin>>m;
  init();
  while(m--)
  {
  	int k,x;
  	char op;
  	cin>>op;
  	if(op=='H')
  	{
  		cin>>x;
  		add_head(x);
	  }
	  else if(op=='D')
	  {
	  	cin>>k;
	  	if(!k) head=en[head];
	  	remove(k-1);
	  }else {
	  	cin>>k>>x;
	  	add(k-1,x);
	  }
  }
  for(int i=head;i!=-1;i=en[i]) cout<<e[i]<<" ";
  return 0;
}



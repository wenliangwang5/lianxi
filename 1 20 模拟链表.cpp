#include<bits/stdc++.h>
#include<iostream>
using namespace std;

const int N=100010;   
int head,e[N],en[N],idx;
//初始化 
void init()
{
	head=-1;
	idx=0;
}
//头插 
void add_head(int k)
{
	
	e[idx]=k;
	en[idx]=head;
	head=idx;
	idx++;
}
// 中间插 

void add(int k,int t)
{
	e[idx]=t;
	en[idx]=en[k];
	en[k]=idx;
	idx++;
}

//删除K后面的点
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
	  }
	  else {
	  	cin>>k>>x;
	  	add(k-1,x);
	  }
  }
  
  for(int i=head;i!=-1;i=en[i])  cout<<e[i]<<" ";
  
  cout<<endl;
    return 0;
}


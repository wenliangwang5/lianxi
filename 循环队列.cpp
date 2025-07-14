#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n,k,size,fro,rea;
int a[N]; 
bool isfull()
{
	return size==n;
}
bool isempty()
{
	return size==0;
}
void Front()
{
	if(isempty()) cout<<"empty"<<endl;
    else cout<<a[fro]<<endl;
}
void enqueue(int x)
{
	if(isfull()) {
		cout<<"full"<<endl;
		return ;
	}
	a[rea]=x;
	rea=(rea+1)%n;
	size++;
	return ;
}
void dequeue()
{
	if(isempty()) {
		cout<<"empty"<<endl;
		return ;
	}
	Front();
	fro=(fro+1)%n;
	size--;
}

int main()
{
  cin>>n>>k;
  while(k--)
  {
  	string s;
  	cin>>s;
  	int x;
  	
  	if(s=="push") {
  		cin>>x;
  		enqueue(x);
	  }
  	else if(s=="front") Front();
  	else dequeue();
  }

  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int n;
int e[N],ne[N],h[N],idx;
void insert(int b)
{
	int k=(b%N+N)%N;
	e[idx]=b;
	ne[idx]=h[k];
	h[k]=idx++;
	
}
void query(int b)
{
	int k=(b%N+N)%N;
	for(int i=h[k];i!=-1;i=ne[i]){
		int j=e[i];
		if(j==b) {
			cout<<"Yes"<<endl;
			return ;
		}
		
	}
	cout<<"No"<<endl;
}
int main()
{
  cin>>n;
  memset(h,-1,sizeof h);
  while(n--)
  {
  	char a;
  	int b;
  	cin>>a>>b;
  	if(a=='I') {
  		insert(b);
	  }
	  else{
	  	query(b);
	  }
  }

  return 0;
}



#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
string A,B;
int a[125];
stack<char> o;
int main()
{
  cin>>A>>B; 
  o.push(A[0]);a[A[0]-'0']=1;A.erase(0,1);
  bool flag=1;
  int times=0;
  while(A.size()&&B.size()&&times<100000)
  {
  	string* st=flag?&B:&A;
  	char tem=(*st)[0];
  	o.push(tem);
	st->erase(0,1);
	if(a[tem-'0']==0) 
	{
		a[tem-'0']=1;
		flag=!flag;
	 } 
	 else {
	 	*st+=o.top();o.pop();
	 	while(o.top()!=tem) {
	 		*st+=o.top();
	 		a[o.top()-'0']=0;
	 		o.pop();
		 }
		 
		 *st+=o.top();
		 a[tem-'0']=0;
		  o.pop();
	 }
  	
  	times++;
  }
if(times>10000) cout<<-1<<'\n';
else if(A.size()) cout<<A<<'\n';
else cout<<B<<'\n';
  return 0;
}



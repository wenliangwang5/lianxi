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
char a[N];
int x;
void solv1(){
        int p=0,q=0;
		int j ;
		for(j=1;j<=x;j++)
		{
			if(a[j]=='W') p++;
			if(a[j]=='L') q++;
			if((p>=11||q>=11)&&abs(p-q)>=2) 
			{
				cout<<p<<':'<<q<<endl;
				p=q=0;
			}
		}
		cout<<p<<':'<<q<<endl;
	

}
void solv2(){
	
		int p=0,q=0;
		int j;
		for(j=1;j<=x;j++)
		{
			if(a[j]=='W') p++;
			if(a[j]=='L') q++;
			if((p>=21||q>=21)&&abs(p-q)>=2) {
				cout<<p<<':'<<q<<endl;
				p=q=0;
			}
		}
		
	cout<<p<<':'<<q<<endl;
	
	
}
int main()
{
  while(1)
  {
  	char b;
  	cin>>b;
  	if(b=='E') break;
  	a[++x]=b;
  }
  
  solv1();
  cout<<endl;
  solv2();
  
  //for(int i=1;i<=x;i++) cout<<a[i]<<" "; 
  return 0; 
}



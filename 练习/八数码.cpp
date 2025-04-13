#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int N=100010,M=1010;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
unordered_map<string,int> d;
queue<string> q;

int bfs(string s)
{
	string en="12345678x";
	q.push(s);
	d[s]=0;
	while(q.size())
	{
		auto t=q.front();
		q.pop();
		int distance=d[t];
		if(t==en) return distance;
		
		int k=t.find('x');
		int x=k/3,y=k%3;
		
		for(int i=0;i<4;i++)
		{
			int a=x+dx[i],b=y+dy[i];
			if(a>=0&&a<3&&b>=0&&b<3)
			{
				swap(t[k],t[a*3+b]);
				if(!d.count(t))
				{
					q.push(t);
					d[t]=distance+1;
				}
				swap(t[k],t[a*3+b]);
				
			}
			
		}
	}
	return -1;
}
int main()
{
  string s;
  for(int i=0;i<9;i++)
  {
  	char a;
  	cin>>a;
  	s+=a;
  	
  }
cout<<bfs(s)<<endl;
  return 0;
}



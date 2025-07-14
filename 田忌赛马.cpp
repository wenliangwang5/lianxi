#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int num;
int a[4],b[4],z[4];

int main()
{
for(int i=0;i<3;i++)
{
	cin>>a[i];
}
for(int i=0;i<3;i++)
{
	cin>>b[i];
}

for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		if(b[j]>a[i]&&!z[j]) 
		{
			num++;
			z[j]=1;
			break;
		}
	}
}
  if(num>=2) cout<<"Yes";
  else cout<<"No";
  return 0;
}


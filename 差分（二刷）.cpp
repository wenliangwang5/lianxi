#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;

int a[N],b[N];
void insert(int l,int r,int c)//差分预处理，后一项减去前一项 
{
	b[l]+=c;
	b[r+1]-=c;
	return ;
}
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;i++) scanf("%d",&a[i]);
  for(int i=1;i<=n;i++) insert(i,i,a[i]);//构建差分数组 
  
  while(m--)
  {
  	int l,r,c;
  	scanf("%d%d%d",&l,&r,&c);
  	insert(l,r,c);//对要插入的数据的位置进行操作，l 点加上，r点之后减去保证只有在l-r之间加上了数据 
	 }   
  for(int i=1;i<=n;i++) b[i]+=b[i-1];//从前到后复原数组 
  
  for(int i=1;i<=n;i++) printf("%d ",b[i]);
  return 0;
}


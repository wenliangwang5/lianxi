#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
int  n;
int a[N];
int upper(int x)
{
	int l=0,r=n-1;
	while(l<r)
	{
		int mid=l+r>>1;
		if(a[mid]>=x) r=mid;//在这可修改是>=还是>  
		else l=mid+1;  //l通过mid+1更新 不用担心l会因为下取整死循环 
		
	}
	return l;
 } 
 
int lowe(int x)
{
	int l=0,r=n-1;
	while(l<r)
	{
		int mid=l+r+1>>1;
		if(a[mid]<=x) l=mid;//在这可修改是<=还是<  但在这里l 通过mid进行更新 容易被下取整卡在死循环里 
		else r=mid-1;//所以下次要进行+1 若l+r为奇数 下取整会卡循环（l一直不变例如 3 4） +1跳出 若l+r为偶数 +1下取整不影响 
	}
	return l;
 } 
int main()
{
	cin>>n;
	
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
  int x;
  cin>>x;
  printf("%d",upper(x));
  printf("%d",lowe(x));
  return 0;
}



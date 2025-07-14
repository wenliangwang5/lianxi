#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int N= 100010;
int n,k;
int q[N]; 

int quick_sort(int l,int r,int k){
	if(l==r) return q[l];
	int x=q[l],i=l-1,j=r+1;
	while(i<j)

{  
  while(q[--j]>x);
  while(q[++i]<x);
  if(i<j) swap(q[i],q[j]);
}	
	int s1=j-l+1;
	if(k<=s1) return quick_sort(l,j,k);
	return quick_sort(j+1,r,k-s1);
	
}

int main()
{ 
  cin>>n>>k;
  for(int i=0;i<n;i++) cin>>q[i];
  
  cout<<quick_sort(0,n-1,k)<<endl;

  return 0;
}


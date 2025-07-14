#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
struct Range
{
   int l,r;
   bool operator < (const Range &W)const
   {
   	return l<W.l;
	   }	
}range[N];

int main()
{
  	 int n;
  	 cin>>n;
  	 for(int i=0;i<n;i++){
  	 	int l,r;
  	 	scanf("%d%d",&l,&r);
  	 	range[i]={l,r};
  	 	
	   }
sort(range,range+n);
priority_queue<int,vector<int>,greater<int>> heap;
  for(int i=0;i<n;i++){
  	auto r=range[i];
  	if(heap.empty()||heap.top()>=r.l) heap.push(r.r);
  	else 
  	{
  		
  		heap.pop();
  		heap.push(r.r);
	  }
  }
  cout<<heap.size();
  return 0;
}


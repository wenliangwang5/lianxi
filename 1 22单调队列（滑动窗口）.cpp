#include<bits/stdc++.h>
#include<iostream>
typedef long long ll;
const int N=1000010;
using namespace std;
int n,k;
int a[N],q[N]; 
int main()
{
 cin.tie(0);
 cout.tie(0);
 ios::sync_with_stdio(0);
 cin>>n>>k;
 for(int i=0;i<n;i++) cin>>a[i];
 
 int hh=0,tt=-1;
 for(int i=0;i<n;i++)
 {
 	if(hh<=tt&&q[hh]<i-k+1) hh++;
 	while(hh<=tt&&a[q[tt]]>=a[i]) tt--;
 	
 	q[++tt]=i;
 	
 	if(i>=k-1) cout<<a[q[hh]]<<" ";
 	
 	
 }
 cout<<endl;
 
 hh=0,tt=-1;
 for(int i=0;i<n;i++)
 {
 	if(hh<=tt&&q[hh]<i-k+1) hh++;
 	
 	while(hh<=tt&&a[q[tt]]<=a[i]) tt--;
 	
 	q[++tt]=i;
 	
 	if(i>=k-1) cout<<a[q[hh]]<<" ";
 	
 	
 }
 
 cout<<endl;
  return 0;
}


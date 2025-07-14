#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  // 请在此输入您的代
  int n;
  cin>>n;
  while(n--)
  {
    int a[11];
    int res=0;
    int tem=0;
    memset(a,0,sizeof a);
    for(int i=1;i<=4;i++)
    {
      int x;
      cin>>x;
      a[x]++;
      tem=max(tem,a[x]); 
    }

    if(tem==1||tem==2) cout<<2<<'\n';
    else if(tem==3) cout<<1<<'\n';
    else cout<<0<<'\n'; 
  }
  return 0;
}

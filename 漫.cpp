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
string s;
int sum;
void solv(int x){
	if(s[x]==s[x+2]&&s[x+2]==s[x+4]&&s[x+1]==s[x+3]&&s[x]!=s[x+1]) sum++;
}
int main()
{
  cin>>s;
  for(int i=0;i<s.size()-4;i++)
  {
  	solv(i);
  }

  cout<<sum;
  return 0;
}



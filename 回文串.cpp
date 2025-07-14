#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1010;
char a[N],b[N];// a和b分别是 正方向的串 和反方向的串 
string s;//字符串读入 
int f[N][N];//f[i][j]表示 原字符串的前i个字符和反转过后的前j个字符的最长公共子序列 

int main()
{
	cin>>s;
	
	int idx=0;
    for(int i=1;i<=s.size();i++) a[i]=s[idx++];//正序提取字符串 
    idx=s.size()-1;
    for(int i=1;i<=s.size();i++) b[i]=s[idx--];//反转过后的的字符串 
    
    for(int i=1;i<=s.size();i++)
    {
    	for(int j=1;j<=s.size();j++)
    	{
    		if(a[i]==b[i]) f[i][j]==max(f[i][j],f[i-1][j-1]+1);// 相等的时候继承前一段的长度再加一 
		    else f[i][j]=max(f[i-1][j],f[i][j-1]); //不相等的话取两段公共序列里较长的那个 
		}
    	
	}
  cout<<s.size()-f[s.size()][s.size()];

  return 0;
}


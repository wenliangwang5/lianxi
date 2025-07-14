#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<cstring>
#include<cmath>
#include<stack>
#include<string>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#define int long long
#define endl '\n'
#define deb(x) cout<<"#"<<x<<" "
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef pair<int,int> PII;
const int N=200010,M=1010,nod=1e9+7;
int t;
void solv(string s,int n)
{
	
  
    vector<int> p;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='1') p.pb(i);	
	}

    if(p.size()==0 ){
    	cout<<"YES"<<endl;	
    	return ;
	}
	
	if(n<=2) {//长度较小直接输出 
	cout<<"NO"<<endl;
	return ;
  }
	else{
		 if(p.size()==1||s[n-1]=='1') { 
	     cout<<"NO"<<endl;
	    return ;
  }
  else if(p[0]+1==p[1]) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
	}
}
signed main()
{
  cin>>t;
  while(t--)
  {
  	int n;
  	cin>>n;
  	
  	string s;
  	cin>>s;
    solv(s,n);
  }

  return 0;
}



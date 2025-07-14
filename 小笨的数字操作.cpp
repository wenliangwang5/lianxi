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
signed main()
{
  cin>>t;
  while(t--)
  {
  	int sum=1;
  	vector<int> x;
  	int c,d,o=0,k;
  	cin>>c>>k;
  	d=c;
  	while(d)
  	{
  		o++;
		if(d!=1&&d/2!=(d+1)/2) x.push_back(o); 
  		d=d/2;
	  }
	sum+=o;
	sum+=k;
	//deb(o);
	for(int i=0;i<x.size();i++)
	{
		//deb(x[i]);
		sum+=(k-x[i]);
	}
	cout<<sum<<endl;
  }
  
  return 0;
}



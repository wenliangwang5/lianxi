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
#define ll long long
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
int n;
signed main()
{
  IOS
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	int m,d,c;
  	cin>>m>>d>>c;
  	if(m<6){
  		  if(c>1800) cout<<"^_^"<<endl;
		   else if(c==1800) cout<<"Ok!"<<endl;
		   else cout<<"Need more!"<<endl;
	  } 
  	else if(m==6){
  		if(d<=20){
  		   if(c>1800) cout<<"^_^"<<endl;
		   else if(c==1800) cout<<"Ok!"<<endl;
		   else cout<<"Need more!"<<endl;	
		  }
		  else {
		  	if(c>2000) cout<<"^_^"<<endl;
		   else if(c==2000) cout<<"Ok!"<<endl;
		   else cout<<"Need more!"<<endl;
		  }
	  }
	  else if(m==7){
	  	if(d<=11){
	  		if(c>2000) cout<<"^_^"<<endl;
		   else if(c==2000) cout<<"Ok!"<<endl;
		   else cout<<"Need more!"<<endl;
		  }
		  else{
		  	cout<<"Too late!"<<endl;
		  }
	  }
	  else{
	  	cout<<"Too late!"<<endl;
	  }
  }

  return 0;
}



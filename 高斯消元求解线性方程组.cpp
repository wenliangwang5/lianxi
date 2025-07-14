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
const int N=110,M=1010,nod=1e9+7;
double a[N][N];
double eps=1e-6;
int n; 
int gauss(){
	int c,r;
	for(c=1,r=1;c<=n;c++)
	{
		int t=r;
		for(int i=r;i<=n;i++)
		{
			if(fabs(a[i][c])>fabs(a[t][c])) t=i;
		}
		if(fabs(a[t][c])<eps) continue;
		
		 for(int i=c;i<=n+1;i++) swap(a[t][i],a[r][i]);
		 
		 for(int i=n+1;i>=c;i--) a[r][i]/=a[r][c];
		 
		 for(int i=r+1;i<=n;i++){
		 	if(fabs(a[i][c])>eps){
		 		for(int j=n+1;j>=c;j--){
		 			a[i][j]-=a[r][j]*a[i][c];
				 }
			 }
		 } 
		 r++;
	}
	
	if(r<=n) {
		for(int i=r;i<=n;i++)
		{
			if(fabs(a[i][n+1])>eps) return 2;
		}
		return 1;
	}
	for(int i=n;i>=1;i--){
		for(int j=i+1;j<=n;j++)
		{
			a[i][n+1]-=a[i][j]*a[j][n+1];
		}
	}
	return 0;
}
signed main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=n+1;j++)
  	{
  		cin>>a[i][j];
	  }
  }
  int t=gauss();
  if(t==0)
  {
  	for(int i=1;i<=n;i++) printf("%.2lf\n",a[i][n+1]);
  }
  else if(t==1) puts("Infinite group solutions");
  else puts("No solution");
  return 0;
}



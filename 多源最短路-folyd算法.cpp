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
int d[M][M];
int n,m,k;
void floyd(){
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++){
				
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);//每次用一个节点来更新周围最短距离 
			}// n次后 所有节点周围都更新过了 多源最短路形成
			 
			
		}
	}
}
signed main()
{
  cin>>n>>m>>k;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=n;j++){
  		if(i==j) d[i][j]=0;
  		else d[i][j]=inf;
	  }
  }
  for(int i=1;i<=m;i++)
  {
  	int a,b,c;
  	cin>>a>>b>>c;
  	d[a][b]=min(d[a][b],c);//重边选择最短的那个边 
  }
  floyd();
  while(k--)
  {
  	int x,y;
  	cin>>x>>y;//多源最短路访问 
  	if(d[x][y]>0x3f3f3f3f/2) cout<<"impossible"<<endl;
  	else cout<<d[x][y]<<endl;
  }
  return 0;
}



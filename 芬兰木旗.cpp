#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>PII;
typedef long long ll;
int n;
map<PII,vector<pair<ll,int>>>mp;
ll _gcd(int x,int y)
{
	return y?_gcd(y,x%y):x;
 } 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int score = 0;
    int step = 0;
    for(int i = 0;i<n;i++) {
        ll x, y;
        int s;
        cin >> x >> y >> s;
        score += s;//易推得最终的分数一定是所有大于0得旗子的分数的和 小于0的分数无贡献  
        //主要是需要推出怎样以最小的 步数达到最大分数 
        ll d = x*x + y*y;
        ll w = abs(__gcd(x,y));
        x/=w,y/=w;
        mp[{x,y}].push_back({d,s});
    }
    for(auto it:mp){
        vector<pair<ll,int>> v = it.second;//把每个方向上的旗子取出来 
        sort(v.begin(),v.end());//旗子距离排序 
        int s = v.size();//每个方向旗子进行判断 
        for(int i = 0;i<s;i++){
            if(v[i].second!=1) step++;//如果当前旗子分数大于1 直接打掉 
            else{
                if((i+1<s&&v[i+1].second!=1)||i+1==s)step++;
				//如果当前旗子是最后一个 或者当前旗子的下一个大于1的话也需要打掉
				//否则证明当前旗子的后面还有其他旗子 不做操作 继续判断 
            }
        }
    }
    cout<<score<<' '<<step;//输出最终分数和步数  
    return 0;
}



#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef pair<int, int> PII;  

vector<PII> c;  // 存储所有优惠券
int minc = 1e18;  // 最小花费，初始化为极大值

// DFS函数：current为当前价格，used为已使用的优惠券掩码
void dfs(int current, int used) {
    minc= min(minc, current);  // 更新最小花费
    
    // 尝试使用每张未使用的优惠券
    for (int i = 0; i < 3; i++) {
        if (!(used & (1 << i)) && current >= c[i].second) {
            // 第i张优惠券未使用且满足使用条件
            int new_price = current - c[i].first;
            new_price = max(0, new_price);  // 确保价格非负
            dfs(new_price, used | (1 << i));
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
    	
        int n;  // 商品原价
        cin >> n;
        
      
        for (int i = 0; i < 3; i++) {
          int x,y;
          cin>>x>>y;
          c.push_back({y,x});
        }
        
        // 按优惠力度降序排序，优先尝试大优惠
        sort(c.begin(), c.end(), [](const PII& a, const PII& b) {
            return a.first > b.first;
        });
        
        minc = n;  // 初始最小值为不使用任何优惠券
        dfs(n, 0);     // 从原价开始，未使用任何优惠券
        
        cout << minc << endl;
        
        // 清空状态，准备下一个测试用例
        c.clear();
    }
    
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

// 解决单个测试用例的函数
void solve() {
    long long a, b, c;
    // 读取每种零食的数量
    cin >> a >> b >> c;

    long long score = 0;

    // 优先选择 0 和 2 组合，每次组合得 2 分
    long long p = min(a, c);
    score += p * 2;
    a -= p;
    c -= p;

    // 处理剩余的 0 和 1 组合，每次组合得 1 分
    
    // 处理剩余的 1 和 2 组合，得 0 分，不增加得分
    // 处理剩余的 1 或 2 两两组合
    if(a>0) score +=b;
    else score += (b / 2) * 2;
    
    score += (c / 2) * 1;
    
    // 输出当前测试用例的最高总得分
    cout << score << endl;
}

int main() {
    int t;
    // 读取测试用例的数量
    cin >> t;

    // 循环处理每个测试用例
    while (t--) {
        solve();
    }

    return 0;
}
    

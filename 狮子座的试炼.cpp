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
int solv(const vector<int>& A) {
    vector<int> zeros;
    int N = A.size();

    // 记录所有0的位置
    for (int i = 0; i < N; ++i) {
        if (A[i] == 0) {
            zeros.push_back(i);
        }
    }

    int m = zeros.size();
    if (m <= 1) return 0;  // 最多一个0，必然合法

    // dp[j] 表示前 j 个 0 中最多能保留多少个，0-indexed 但 dp 多一位
    vector<int> dp(m + 1, 0);

    for (int j = 1; j <= m; ++j) {
        // 不保留当前这个0
        dp[j] = dp[j - 1];

        // 二分查找在 zeros 中找最后一个位置小于等于 zeros[j - 1] - 3 的下标
        int target = zeros[j - 1] - 3;
        int k = upper_bound(zeros.begin(), zeros.begin() + j - 1, target) - zeros.begin();

        // 保留当前这个0 + 可共存的前面最多的保留量
        dp[j] = max(dp[j], dp[k] + 1);
    }

    // 总的0数减去最多能保留的合法0数，即需翻转的次数
    return m - dp[m];
}

// 示例用法
signed main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int result = solv(A);
    cout << result << endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

// 检查子串s[l..r]是否可以通过替换?成为回文
bool can( string s, int l, int r) {
    while (l < r) {
        if (s[l] != '?' && s[r] != '?' && s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

void solve(string s) {
    int n = s.size();
    int sum = n; // 单个字符都是回文
    
    // 检查所有长度>=2的子串
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int l = i;
            int r = i + len - 1;
            if (can(s, l, r)) {
                sum++;
            }
        }
    }
    
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}

#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N = 20;
int n;
char g[N][N];
int dg[N * 2], udg[N * 2], col[N];

// 深度优先搜索函数
void dfs(int t) {
    // 当 t 等于 n 时，说明已经成功放置了 n 个皇后，输出当前方案
    if (t == n) {
        for (int i = 0; i < n; i++) {
            puts(g[i]);
        }
     puts("");
        return;
    }
    // 尝试在当前行的每一列放置皇后
    for (int i = 0; i < n; i++) {
        // 检查当前位置是否可以放置皇后
        if (!col[i] && !dg[t + i] && !udg[n + i - t]) {
            g[t][i] = 'Q'; 
            col[i] = dg[t + i] = udg[n + i - t] = 1;
            // 递归调用 dfs 函数，处理下一行
            dfs(t + 1);
            // 回溯操作，撤销当前选择
            col[i] = dg[t + i] = udg[n + i - t] = 0; 
            g[t][i] = '.';
        }
    }
}

int main() {
    IOS;
    cin >> n;
    // 初始化棋盘
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g[i][j] = '.'; 
        }
    }
    // 从第 0 行开始进行深度优先搜索
    dfs(0);
    return 0;
}

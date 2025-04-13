#include <bits/stdc++.h>
using namespace std;

const int N = 110;
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
int g[N][N], vis[N][N], dst[N][N];
int n, m;
int res = 0x3f3f3f3f; // 用于记录最小金币数量

void dfs(int x, int y, int cost, int magic) {
    // 达到终点且当前花费小于结果时，更新结果
    if (x == n && y == n && cost < res) {
        res = cost;
        return ;
    }
    // 剪枝：当前花费已经超过结果，不再继续搜索
    if (cost >= res) return;
    // 剪枝：当前花费已经超过该点之前的最小花费，不再继续搜索
    if (cost >= dst[x][y]) return;
    dst[x][y] = cost; // 记录当前点的最小花费

    // 遍历四个方向
    for (int i = 0; i < 4; i++) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        // 检查下一个位置是否合法且未访问过
        if (tx >= 1 && tx <= n && ty >= 1 && ty <= n && !vis[tx][ty]) {
            vis[tx][ty] = 1; // 标记该点为已访问
            if (g[tx][ty] == -1 && !magic) {
                // 下一个位置是无色格子，且未使用魔法时，尝试使用魔法
                g[tx][ty] = g[x][y];
                dfs(tx, ty, cost + 2, 1); // 使用魔法，花费+2
                g[tx][ty] = -1; // 回溯，将无色格子还原
            } else if (g[tx][ty] != -1) {
                // 下一个位置有颜色格子，尝试不使用魔法
                dfs(tx, ty, cost + (g[tx][ty] != g[x][y]), 0); // 如果颜色不同，花费+1
            }
            vis[tx][ty] = 0; // 回溯，标记该点为未访问
        }
    }
}

int main() {
    cin >> n >> m;
    memset(g, -1, sizeof(g));
    memset(dst, 0x3f, sizeof(dst)); // 初始化为无穷大，表示尚未计算最小花费
    while (m--) {
        int x, y, c;
        cin >> x >> y >> c;
        g[x][y] = c;
    }
    vis[1][1] = 1; // 标记起点为已访问
    dfs(1, 1, 0, 0); // 从起点开始深度优先搜索
    if (res == 0x3f3f3f3f) {
        cout << "-1" << endl;
    } else {
        cout << res << endl;
    }
    return 0;
}

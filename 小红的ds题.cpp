#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 200010;

int n;
int a[N];  // 每层节点数

struct Node {
    int lidx=-1, ridx=-1;  // 左右子节点编号
} nodes[N];

int main() {
    IOS;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    int current_node = 1;  // 当前处理的节点编号
    
    // 处理第一层（根节点）
    nodes[1].lidx = -1;
    nodes[1].ridx = -1;
    current_node++;
    
    // 逐层处理剩余层
    for (int i = 2; i <= n; i++) {
        int parent_start = current_node - a[i-1];  // 上一层第一个节点
        int parent_end = current_node - 1;         // 上一层最后一个节点
        int child_count = a[i];                    // 当前层节点数
        
        int child = current_node;  // 当前层第一个节点编号
        
        // 为每个父节点分配子节点
        for (int p = parent_start; p <= parent_end && child_count > 0; p++) {
            // 分配左子节点
            if (child_count > 0) {
                nodes[p].lidx = child++;
                child_count--;
            } else {
                nodes[p].lidx = -1;
            }
            
            // 分配右子节点
            if (child_count > 0) {
                nodes[p].ridx = child++;
                child_count--;
            } else {
                nodes[p].ridx = -1;
            }
        }
        
        // 更新当前节点编号
        current_node += a[i];
    }
    
    // 输出结果
    cout << 1 << endl;  // 根节点编号为1
    for (int i = 1; i < current_node; i++) {
        cout << nodes[i].lidx << " " << nodes[i].ridx << endl;
    }
    
    return 0;
}

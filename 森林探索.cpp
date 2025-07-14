#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N = 100010;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> tree(n, vector<int>(n, 0));
    int dx[] = { 0,1,0,-1 };//按右下左上的顺序设计坐标变换 
    int dy[] = { 1,0,-1,0 };
    int dix = 0;//坐标变换的索引 
    int x = 0, y = 0;//坐标 
    int num = 1;//探索次数 
    while (num <= n * n)//没有探索完一直循环 
    {
        tree[x][y] = num++;//赋值当前探索的次序 
        int nextx = x + dx[dix];//计算临时坐标 
        int nexty = y + dy[dix];
        if (nextx < 0 || nextx >= n || nexty < 0 || nexty >= n || tree[nextx][nexty] != 0)
        {//当坐标越界或者坐标已被占用 
            dix = (dix + 1) % 4;//转换方向 
            nextx = x + dx[dix];//重新计算 这里不必担心重新计算的坐标也不符合 因为由题意变换一次必定符合 
            nexty = y + dy[dix];
        }
        x = nextx;//临时坐标赋值为下一次循环准备 
        y = nexty;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << tree[i][j] << " ";//循环输出结果 
        }
        puts("");
    }

    return 0;
}

#include <iostream>
#include <queue>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int> > q; //定义一个名为q的小根堆

int main()
{
    scanf("%d", &n);

    while (n --)
    {
        int x;
        scanf("%d", &x);
        q.push(x); //依序插入果子堆
    }

    int res = 0;
    while (q.size() > 1) //当还没有只剩一个果子堆的时候，即还没有合并完的时候
    {
        int a = q.top(); q.pop(); //取第一小值
        int b = q.top(); q.pop(); //取第二小值
        int c = a + b; //消耗体力值 与 新堆果子数

        res += c;
        q.push(c); //插入新果子堆
    }

    printf("%d\n", res);

    return 0;
}
 

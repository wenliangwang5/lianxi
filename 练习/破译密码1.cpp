#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
const int N = 100010, M = 1010;
int n;
// 存储每个芯片的破译时间和传输时间
vector<PII> tasks; 

int main() {
    IOS;
    cin >> n;
    tasks.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> tasks[i].first;
    }
    for (int i = 0; i < n; ++i) {
        cin >> tasks[i].second;
    }
    // 按破译时间降序排序
    sort(tasks.begin(), tasks.end(), [](const PII& a, const PII& b) {
        return a.first > b.first;
    });
    int maxTime = 0;
    int currentTime = 0;
    for (const auto& task : tasks) {
        currentTime += task.first;
        maxTime = max(maxTime, currentTime + task.second);
    }
    cout << maxTime << endl;
    return 0;
}    

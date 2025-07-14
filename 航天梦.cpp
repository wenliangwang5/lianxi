#include <iostream>
#include <vector>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N = 100010, mod1 = 1e9 + 7;

int n;
int a[N];

int main() {
    IOS;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    ll ans = 1;
    // 遍历每一位
    for (int bit = 0; bit < 32; bit++) {
        int zero_count = 0, one_count = 0;
        // 统计该位为 0 和 1 的元素个数
        for (int i = 1; i <= n; i++) {
            if (a[i] & (1 << bit)) one_count++;
            else zero_count++;
        }
        // 计算该位对最终结果的贡献
        ll bit_contribution = (ll)(one_count * zero_count )% mod1;
        // 如果该位有贡献，则将 2 的该位次幂乘到结果中
        if (bit_contribution > 0) {
            ll power = 1LL << bit;
            for (int i = 0; i < bit_contribution; i++) {
                ans = (ans * power) % mod1;
            }
        }
    }
    cout << ans;
    return 0;
}

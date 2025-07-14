#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long qpow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int v2 = 0;
        int temp = n;
        while (temp) {
            temp /= 2;
            v2 += temp;
        }
        long long denom = v2 + 1;
        long long inv_denom = qpow(denom, MOD - 2);
        cout << inv_denom <<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int, int> PII;
const int N = 200010, M = 1010;
int n, idx = 0, idx1 = 0;
ll sum = 0;
int a[N], b[N], c[M][M];

void solve()
{
    ll res = 0;
    idx++;
    for (int i = 1; i <= n; i++)
    {
        res += a[i] ^ b[i];
        c[idx][i] = b[i];
    }
    if (res > sum) {
        sum = res;
        idx1 = idx;
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = i;
    }
    do {
        solve();
    } while (next_permutation(b + 1, b + 1 + n));
    for (int i = 1; i <= n; i++)
    {
        cout << c[idx1][i] << " ";
    }
    return 0;
}    

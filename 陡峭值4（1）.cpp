#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define i32 int

const int N = 100010;
void solve()
{
	int n, k;
	string s;
	cin >> n >> k >> s;
	vector<int> sum(n + 1);
	s = " " + s;
	for (int i = 2; i <= n; i++)
	{
		sum[i] = sum[i - 1] + abs(s[i] - s[i - 1]);
	}
	ll ans = 0;
	for (int i = k; i <= n; i++) 
	{
		ans += (sum[i] - sum[i - k + 1]);
	}
	cout << ans << '\n';
}
int main()
{
	solve();

	return 0;
}



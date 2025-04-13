#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
const int N = 100010, M = 1010;
vector<vector<int>> x(10001, vector<int>(4));
int n, p,q,a,b, zx, zy;
void solve(int i, int a, int b, int zx, int zy)
{
	x[i][0] = a;
	x[i][1] = b;
	x[i][2] = a + zx - 1;
	x[i][3] = b + zy - 1;
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> zx >> zy;
		solve(i, a, b, zx, zy);
	}
	cin>>p>>q;
	int res = -1;
	for (int i = 1; i <= n; i++)
	{
		if (p >= x[i][0] && q >= x[i][1] && p <= x[i][2] && q <= x[i][3]) res = i;

	}
	cout << res;
	return 0;
}



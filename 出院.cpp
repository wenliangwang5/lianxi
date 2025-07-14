#include<bits/stdc++.h>
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
typedef long long ll;
typedef pair<int, int> PII;
const int N = 100010, M = 1010;
map <string, char> m;
set<string> x;
int n, k;
void solve(string p)
{
	if (x.count(p)) {
		cout << m[p] << endl;
		return;
	}
	int idx = 0, cnt = 0;
	for (auto z : x)
	{
		int flag = 1;
		idx = 0;
		for (int i = 0; i < z.size(); i++)
		{
			if (z[i] == p[idx])
			{
				idx++;
			}
			else flag = 0;
		}
		if (flag) {
			cnt++;
		}
	}
	if (cnt == 0) {
		cout << "D" << endl;
		return;
	}
	idx = 0,cnt=0;
	vector<char> o;
	while (idx < p.size())
	{

		for (auto z : x)
		{
			int flag = 1;
			int las = idx;
			for (int i = 0; i <z.size(); i++)
			{
				if (p[idx] == z[i]) {
					idx++;
				}
				else {
					flag = 0;
				}
			}
			if (flag) {
				cout << m[z];
				break;
			}
			else {
				idx = las;
			}
		}

	}
	cout << endl;
}
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		string s;
		char b;
		cin >> s >> b;
		m[s] = b;
		x.insert(s);
	}
	while (k--)
	{
		string p;
		cin >> p;

		solve(p);
	}
	return 0;
}



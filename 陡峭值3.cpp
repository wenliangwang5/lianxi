#include <iostream>

using namespace std;

const int N = 1010;

int n, k;
string str;

int d[N];
int s[N];

int main()
{
    cin >> n >> k;
    cin >> str;
    
    for (int i = 0; i < str.size() - 1; i ++ )
        d[i + 1] = abs(str[i + 1] - str[i]);
    
    for (int i = 1; i < str.size(); i ++ ) s[i] = s[i - 1] + d[i];
    
    int res = 0;
    for (int i = 1; i < str.size() - k + 2; i ++ )
        res += s[i + k - 2] - s[i - 1];
    
    cout << res << '\n';
    
    return 0;
}

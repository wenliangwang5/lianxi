#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t;
    cin >> t;
    
    string s=t;
    
    if (t.size() % 2 != 0) {
        s = "0" + t;
    }
    
    if (s.size() >= 2) {
        if (s[s.size()-2] == '0') {
            cout << s[s.size()-1];
        } else {
            cout << s[s.size()-2] << s[s.size()-1];
        }
    }
    
    for (int i = s.size() - 3; i >= 0; i -= 2) {
        cout << s[i-1] << s[i];
    }

    return 0;
}

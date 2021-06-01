#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k = 0;
        for (int i = 0; i < n; i++) {
            k += (s[i] == '1');
        }
        if (k % 2 != 0 || s.front() == '0' || s.back() == '0') {
            cout << "NO" << endl;
            continue;
        }
        string a, b;
        int c = 0;
        bool f = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                a.push_back(c < k / 2 ? '(' : ')');
                b.push_back(a.back());
                ++c;
            } else if (s[i] == '0') {
                a.push_back(f ? ')' : '(');
                b.push_back(f ? '(' : ')');
                f = !f;
            }
        }
        cout << "YES" << endl;
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}
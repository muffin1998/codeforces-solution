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
        vector<bool> mark(26, false);
        for (int i = 0; i < n; i++) {
            mark[s[i] - 'A'] = true;
        }
        bool ans = true;
        for (int i = 0; i < 26; i++) {
            if (mark[i]) {
                int l = s.find('A' + i);
                int r = s.find_last_of('A' + i);
                for (int j = l; j <= r; j++) {
                    if (s[j] != 'A' + i) {
                        ans = false;
                        break;
                    }
                }
                if (!ans) {
                    break;
                }
            }
        }
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
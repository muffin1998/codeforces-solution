#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        vector<int> a(3, 0), b(3, 0);
        cin >> n;
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        string s;
        cin >> s;
        map<char, int> c;
        c['R'] = 0;
        c['P'] = 1;
        c['S'] = 2;
        for (int i = 0; i < n; i++) {
            ++b[c[s[i]]];
        }
        int cnt = 0;
        for (int i = 0; i < 3; i++) {
            cnt += min(b[i], a[(i + 1) % 3]);
        }
        if (cnt < ceil(n / 2.0)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            string res(n, ' ');
            for (int i = 0; i < n; i++) {
                if (s[i] == 'R' && a[1] > 0) {
                    res[i] = 'P';
                    --a[1];
                } else if (s[i] == 'P' && a[2] > 0) {
                    res[i] = 'S';
                    --a[2];
                } else if (s[i] == 'S' && a[0] > 0) {
                    res[i] = 'R';
                    --a[0];
                }
            }
            char cs[3] = {'R', 'P', 'S'};
            for (int i = 0; i < n; i++) {
                if (res[i] == ' ') {
                    for (int j = 0; j < 3; j++) {
                        if (a[j] > 0) {
                            res[i] = cs[j];
                            --a[j];
                            break;
                        }
                    }
                }
            }
            cout << res << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int f(int i, int j) {
    return j * i + j * (j - 1) / 2;
}

int main() {
    const int MAX_N = 501;
    int t;
    cin >> t;
    while (t--) {
        int n, l, r, s;
        cin >> n >> l >> r >> s;
        int m = r - l + 1;
        vector<bool> mark(n + 1, false);
        vector<int> ans(n + 1, -1);
        bool found = false;
        if (f(1, m) > s || f(n - m + 1, m) < s) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 1; i <= n - m + 1; i++) {
            if (f(i, m) <= s && f(i, m) + m >= s) {
                int t = s - f(i, m);
                for (int j = r, k = i + m - 1; j >= l; j--, k--) {
                    if (t > 0) {
                        ans[j] = k + 1;
                        mark[k + 1] = true;
                        --t;
                    } else {
                        ans[j] = k;
                        mark[k] = true;
                    }
                }
            }
        }
        for (int i = 1, j = 1; i <= n && j <= n;) {
            while (i <= n && mark[i]) ++i;
            while (j <= n && ans[j] != -1) ++j;
            if (i <= n && j <= n) {
                mark[i] = true;
                ans[j] = i;
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
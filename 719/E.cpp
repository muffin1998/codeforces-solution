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
        vector<int> a;
        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {
                a.push_back(i);
            }
        }
        if (a.size() < 2) {
            cout << 0 << endl;
            continue;
        }
        int m = a.size();
        vector<long long> ps(m + 1);
        for (int i = 1; i <= m; i++) {
            ps[i] = ps[i - 1] + a[i - 1];
        }
        long long ans = LLONG_MAX;
        for (int i = 0; i < m - 1; i++) {
            if (i + 1 >= m - i - 1) {
                long long ls = 1ll * (i + 1) * a[i] - ps[i + 1] - 1ll * i * (i - 1) / 2;
                long long rs = ps[m] - ps[i + 1] - 1ll * (m - i - 1) * (a[i] + 1) - 1ll * (m - i - 1) * (m - i - 2) / 2;
                ans = min(ans, ls + rs);
            } else {
                long long ls = 1ll * (i + 1) * (a[i + 1] - 1) - ps[i + 1] - 1ll * i * (i + 1) / 2;
                long long rs = ps[m] - ps[i + 1] - 1ll * (m - i - 1) * a[i + 1] - 1ll * (m - i - 1) * (m - i - 2) / 2;
                ans = min(ans, ls + rs);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
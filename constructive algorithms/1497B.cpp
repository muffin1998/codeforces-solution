#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> r(m);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            ++r[a % m];
        }
        int res = 0;
        if (r[0] > 0)
            ++res;
        for (int i = 1; i <= m / 2; i++) {
            if (r[i] > 0 && r[m - i] > 0) {
                res += 1 + max(0, abs(r[i] - r[m - i]) - 1);
            }
            else
                res += abs(r[i] - r[m - i]);
        }
        cout << res << endl;
    }
}
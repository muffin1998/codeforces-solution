#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> l(n), r(n);
        for (int i = 0; i < n; i++) {
            if (a[i] > i) {
                ++r[a[i] - i - 1];
            } else {
                ++l[i - a[i] + 1];
            }
        }
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > i) {
                ans += r[a[i] - i - 1] - 1;
            } else {
                ans += l[i - a[i] + 1] - 1;
            }
        }
        cout << ans / 2 << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = (int)1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        ll res = 1;
        for (int i = 0; i < k; i++) {
            res *= n;
            res %= mod;
        }
        cout << res << endl;
    }
    return 0;
}
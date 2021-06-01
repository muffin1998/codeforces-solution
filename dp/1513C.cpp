#include <bits/stdc++.h>

using namespace std;

const int mod = (int)1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<vector<long long>> dp(10, vector<long long>((int)2e5 + 1));
    for (int i = 0; i < 10; i++) {
        dp[i][0] = 1;
    }
    vector<long long> a(10), b(10);
    a[9] = b[9] = 1;
    long long ans = 1;
    for (int i = 1; i < (int)2e5 + 1; i++) {
        for (int i = 0; i < 10; i++) {
            if (i < 9) {
                a[i] = (a[i] - b[i] + mod) % mod;
                a[i + 1] += b[i];
                a[i + 1] %= (int)1e9 + 7;
            } else {
                a[i] = (a[i] - b[i] + mod) % mod;
                a[0] += b[i];
                a[0] %= (int)1e9 + 7;
                a[1] += b[i];
                a[1] %= (int)1e9 + 7;
                ans += b[i];
                ans %= (int)1e9 + 7;
            }
        }
        for (int i = 0; i < 10; i++) {
            b[i] = a[i];
        }
        dp[9][i] = ans;
    }
    for (int i = 8; i >= 0; i--) {
        for (int j = 1; j < (int)2e5 + 1; j++) {
            dp[i][j] = dp[i + 1][j - 1];
        }
    }
    while (t--) {
        int n, m;
        cin >> n >> m;
        long long ans = 0;
        while (n > 0) {
            int b = n % 10;
            ans += dp[b][m];
            ans %= (int)1e9 + 7;
            n /= 10;
        }
        cout << ans << endl;
    }
    return 0;
}
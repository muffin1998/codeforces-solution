#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= 9; i++) {
            long long a = i, base = 1;
            while (a <= n) {
                ++ans;
                base *= 10;
                a += base * i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
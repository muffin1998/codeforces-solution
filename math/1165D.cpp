#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> d(n);
        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }
        sort(d.begin(), d.end());
        long long x = 1ll * d[0] * d[n - 1];
        for (int i = 1, j = n - 2; i <= j; i++, j--) {
            if (1ll * d[i] * d[j] != x) {
                x = -1;
                break;
            }
        }
        vector<int> a;
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                a.push_back(i);
                if (x / i != i)
                    a.push_back(x / i);
            }
        }
        if (a != d) {
            x = -1;
        }
        cout << x << endl;
    }
    return 0;
}
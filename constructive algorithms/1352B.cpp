#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n >= k && (n - k) % 2 == 0) {
            cout << "YES" << endl;
            cout << (1 + n - k) << " ";
            for (int i = 1; i < k; i++) {
                cout << 1 << " ";
            }
        }
        else if (n >= 2 * k && (n - 2 * k) % 2 == 0) {
            cout << "YES" << endl;
            cout << (2 + n - 2 * k) << " ";
            for (int i = 1; i < k; i++) {
                cout << 2 << " ";
            }
        }
        else
            cout << "NO";
        cout << endl;
    }
}
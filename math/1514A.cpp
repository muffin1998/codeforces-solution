#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool res = true;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if ((int)sqrt(a) * (int)sqrt(a) != a) {
                res = false;
            }
        }
        if (res) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
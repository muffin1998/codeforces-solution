#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int s = 0;
        int res = 0;
        while (s < n) {
            ++res;
            s = res * (res + 1) / 2;
        }
        if (s == n || s - n > 1) {
            cout << res << endl;
        }
        else {
            cout << (res + 1) << endl;
        }
    }
    return 0;
}
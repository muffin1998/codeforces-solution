#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> res;
        for (int i = (n - 1) / 2, j = i + 1; i >= 0 && j < n; i--, j++) {
            cout << a[i] << " " << a[j] << " ";
        }
        if (n % 2 != 0) {
            cout << a[0] << " " << endl;
        }
    }
    return 0;
}
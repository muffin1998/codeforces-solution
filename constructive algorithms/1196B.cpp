#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> res;
        int oc = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 != 0) {
                ++oc;
                if (res.size() < k - 1) {
                    res.push_back(i);
                }
            }
        }
        if (oc % 2 != k % 2 || oc < k) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            for (int i = 0; i < res.size(); i++) {
                cout << res[i] + 1 << " ";
            }
            cout << n << endl;
            cout << endl;
        }
    }
    return 0;
}
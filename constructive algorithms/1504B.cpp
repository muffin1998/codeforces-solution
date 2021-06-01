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
        string a, b;
        cin >> a >> b;
        vector<int> t(n);
        a.push_back(0);
        b.push_back(0);
        int cnt = 0;
        bool res = true;
        for (int i = 0; i < n; i++) {
            cnt += (a[i] == '1') - (a[i] == '0');
            if ((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt != 0) {
                res = false;
                break;
            }
        }
        if (res) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
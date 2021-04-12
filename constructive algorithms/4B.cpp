#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> min_t(n), max_t(n);
    int min_ts = 0, max_ts = 0;
    for (int i = 0; i < n; i++) {
        cin >> min_t[i];
        cin >> max_t[i];
        min_ts += min_t[i];
        max_ts += max_t[i];
    }
    if (max_ts < s || min_ts > s) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        s -= min_ts;
        for (int i = 0; i < n; i++) {
            if (s > 0) {
                cout << (min_t[i] + min(s, max_t[i] - min_t[i])) << " ";
                s -= min(s, max_t[i] - min_t[i]);
            }
            else {
                cout << min_t[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
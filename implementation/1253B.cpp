#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unordered_set<int> s0, s1;
    vector<int> ans;
    ans.push_back(0);
    for (int i = 0; i < n; i++) {
        if ((a[i] > 0 && s0.find(a[i]) != s0.end()) || (a[i] < 0 && s1.find(-a[i]) == s1.end())) {
            cout << -1 << endl;
            return 0;
        } else if (a[i] > 0) {
            s0.insert(a[i]);
            s1.insert(a[i]);
        } else if (a[i] < 0) {
            s1.erase(-a[i]);
            if (s1.size() == 0) {
                ans.push_back(i + 1);
                s0.clear();
            }
        }
    }
    if (s1.size() != 0) {
        cout << -1 << endl;
        return 0;
    }
    cout << ans.size() - 1 << endl;
    for (int i = 1; i < ans.size(); i++) {
        cout << ans[i] - ans[i - 1] << " ";
    }
    cout << endl;
    return 0;
}
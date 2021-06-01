#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    unordered_map<int, vector<int>> c;
    for (int i = 0; i < k; i++) {
        for (int j = i; j < k; j++) {
            c[i].push_back(j);
            if (i != j) {
                c[j].push_back(i);
            }
        }
    }
    string ans;
    int t = 0;
    ans.push_back(t + 'a');
    while (c[t].size() > 0 && ans.size() < n) {
        int v = c[t].back();
        c[t].pop_back();
        t = v;
        ans.push_back(t + 'a');
    }
    t = 0;
    string p(ans.substr(1, ans.size() - 1));
    while (ans.size() < n) {
        ans += p;
    }
    cout << ans.substr(0, n) << endl;
}
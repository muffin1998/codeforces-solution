#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        if (n == 2) {
            cout << -1 << endl;
        } else {
            vector<vector<int>> ans(n, vector<int>(n));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    ans[i][j] = i * n + j + 1;
                }
            }
            vector<int> temp(n);
            for (int i = 0; i < n; i++) {
                temp[i] = ans[n - 1][i];
            }
            for (int i = n - 1; i > 0; i--) {
                for (int j = 0; j < n; j++) {
                    if (j % 2 == 0) {
                        ans[i][j] = ans[i - 1][j];
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    ans[0][i] = temp[i];
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << ans[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
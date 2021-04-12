#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m + 1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((i == 0 || i == n - 1) && (j == 0 || j == m - 1)) {
                    if (a[i][j] > 2) {
                        flag = false;
                        break;
                    }
                    a[i][j] = 2;
                }
                else if ((i == 0 || i == n - 1 || j == 0 || j == m - 1)) {
                    if (a[i][j] > 3) {
                        flag = false;
                        break;
                    }
                    a[i][j] = 3;
                }
                else {
                    if (a[i][j] > 4) {
                        flag = false;
                        break;
                    }
                    a[i][j] = 4;
                }
            }
            if (!flag) {
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
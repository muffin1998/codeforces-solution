#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    vector<vector<int>> b(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> res;
    int d[4][2] = {{0, 0}, {1, 0}, {0, 1}, {1, 1}};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < n - 1 && j < m - 1 && a[i][j] == 1) {
                bool flag = true;
                for (int k = 0; k < 4; k++) {
                    if (a[i + d[k][0]][j + d[k][1]] == 0) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    res.push_back({i + 1, j + 1});
                    for (int k = 0; k < 4; k++) {
                        b[i + d[k][0]][j + d[k][1]] = 1;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != b[i][j]) {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++) {
        cout << res[i][0] << " " << res[i][1] << endl;
    }
    return 0;
}
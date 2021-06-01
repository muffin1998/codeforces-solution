#include <bits/stdc++.h>

using namespace std;

vector<int> dijkstra() {
    vector<int> dist;
    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, w;
    cin >> n >> m >> w;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<pair<int, int>>> g;
    int dt[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    return 0;
}
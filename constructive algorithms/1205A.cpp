#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        vector<int> base;
        int m = 1;
        for (int i = 0; i < (n - 1) / 2; i++) {
            base.push_back(m);
            m += 3;
            base.push_back(m);
            m += 1;
        }
        base.push_back(m);
        for (int i = 0; i < n; i++) {
            base.push_back(base[i] + ((i % 2) == 0 ? 1 : - 1));
        }
        for (int i = 0; i < base.size(); i++)
            cout << base[i] << " ";
        cout << endl;
    }
    return 0;
}
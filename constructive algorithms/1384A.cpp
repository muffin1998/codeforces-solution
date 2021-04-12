#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string res(200, 'a');
        cout << res << endl;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            for (int j = k; j < 200; j++)
                res[j] = (res[j] == 'a' ? 'b' : 'a');
            cout << res << endl;
        }
    }
    return 0;
}
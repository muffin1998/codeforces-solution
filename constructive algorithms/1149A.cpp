#include <bits/stdc++.h>

using namespace std;

bool is_prime[400001];

int main() {
    int n;
    cin >> n;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            ++c1;
        } else {
            ++c2;
        }
    }
    fill(is_prime, is_prime + 400001, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= sqrt(400001); i++) {
        for (int j = i; i * j < 400001; j++) {
            is_prime[i * j] = false;
        }
    }
    int s = 0;
    while (c1 != 0 && c2 != 0) {
        if (is_prime[s + 1]) {
            s += 1;
            cout << 1 << " ";
            --c1;
        } else {
            s += 2;
            cout << 2 << " ";
            --c2;
        }
    }
    while (c1 != 0) {
        cout << 1 << " ";
        --c1;
    }
    while (c2 != 0) {
        cout << 2 << " ";
        --c2;
    }
    return 0;
}
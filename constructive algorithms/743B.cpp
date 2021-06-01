#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int find(ll n, ll k) {
    ll l = (1ll << n) - 1;
    if (k > l / 2 + 1) {
        return find(n - 1, k - l / 2 - 1);
    } else if (k < l / 2 + 1) {
        return find(n - 1, k);
    } else {
        return n;
    }
}

int main() {
    ll n, k;
    cin >> n >> k;
    cout << find(n, k) << endl;
    return 0;
}
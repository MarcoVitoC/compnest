#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (n == 1 && k == 1) {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }

    if (k == 1 || k >= n) {
        cout << -1 << endl;
        return;
    }

    cout << 3 << endl;
    if (k % 2 == 0) {
        cout << 1 << " " << k << " " << k + 1 << endl;
    } else {
        cout << 1 << " " << k - 1 << " " << k + 2 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
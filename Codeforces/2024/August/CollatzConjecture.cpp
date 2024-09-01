#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int x, y, k;
    cin >> x >> y >> k;

    while (x != 1) {
        int diff = y - (x % y);
        if (k < diff) {
            cout << x + k << endl;
            return;
        }

        x += diff;
        k -= diff;
        while (x % y == 0) {
            x /= y;
        }
    }

    cout << k % (y - 1) + 1 << endl;
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
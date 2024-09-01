#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

bool isIntersect(int l, int r, int L, int R) {
    return (l < L && r >= L) || (l <= R && r > R) || (l < L && r > R);
}

void solve() {
    int n, x, m;
    cin >> n >> x >> m;

    int l, r, L = x, R = x;
    while (m--) {
        cin >> l >> r;

        if (isIntersect(l, r, L, R)) {
            L = min(l, L);
            R = max(r, R);
        }
    }

    cout << R - L + 1 << endl;
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
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    vector<int> b(n);
    b[0] = 1, b[n - 1] = n - 2;
    for (int i=1; i<n-1; i++) {
        int prevDiff = abs(a[i] - a[i - 1]);
        int nextDiff = abs(a[i] - a[i + 1]);

        b[i] = (min(prevDiff, nextDiff) == prevDiff) ? i - 1 : i + 1;
    }

    vector<int> lc(n);
    lc[0] = 0;
    for (int i=1; i<n; i++) {
        lc[i] = (i == b[i - 1]) ? lc[i - 1] + 1 : lc[i - 1] + abs(a[i] - a[i - 1]);
    }

    vector<int> rc(n);
    rc[n - 1] = 0;
    for (int i=n-2; i>=0; i--) {
        rc[i] = (i == b[i + 1]) ? rc[i + 1] + 1 : rc[i + 1] + abs(a[i] - a[i + 1]);
    }

    int m;
    cin >> m;

    while (m--) {
        int x, y;
        cin >> x >> y;

        if (x < y) {
            cout << lc[y - 1] - lc[x - 1] << endl;
        } else {
            cout << rc[y - 1] - rc[x - 1] << endl;
        }
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
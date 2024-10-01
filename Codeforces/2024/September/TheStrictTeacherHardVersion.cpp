#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> b(m);
    for (int &bi: b) cin >> bi;
    sort(all(b));

    while (q--) {
        int a;
        cin >> a;

        if (a <= b[0]) {
            cout << b[0] - 1 << endl;
        } else if (a >= b[m - 1]) {
            cout << n - b[m - 1] << endl;
        } else {
            int lb = lower_bound(all(b), a) - b.begin();
            
            a = (b[lb - 1] + b[lb]) / 2;
            cout << min(abs(a - b[lb - 1]), abs(a - b[lb])) << endl;
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
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

    int a;
    cin >> a;

    if (a >= b[0] && a <= b[1]) {
        a = (b[0] + b[1]) / 2;
        cout << min(abs(a - b[0]), abs(a - b[1])) << endl;
        return;
    }

    cout << ((a >= b[1]) ? n - b[1] : b[0] - 1) << endl;
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
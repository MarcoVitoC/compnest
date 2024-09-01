#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll a, b, n, m;
    cin >> a >> b >> n >> m;

    if (a + b < n + m) {
        cout << "No" << endl;
        return;
    }

    cout << ((min(a, b) < m) ? "No" : "Yes") << endl;
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
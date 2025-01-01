#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (auto &ai: a) cin >> ai;

    for (int i=0; i<n; i++) {
        bool ok = true;
        for (int j=0; j<n; j++) {
            if (j == i) continue;
            if (abs(a[i] - a[j]) % k == 0) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "YES" << endl;
            cout << i + 1 << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
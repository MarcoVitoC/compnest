#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, color = 1;
    cin >> n;

    vector<int> a(n), ans(n);
    for (auto &ai: a) cin >> ai;

    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    for (auto p: primes) {
        bool ok = false;
        for (int i=0; i<n; i++) {
            if (!ans[i] && a[i] % p == 0) {
                ok = true;
                ans[i] = color;
            }
        }

        if (ok) color++;
    }

    cout << color - 1 << endl;
    for (int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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
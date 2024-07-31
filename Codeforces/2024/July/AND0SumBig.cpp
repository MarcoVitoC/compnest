#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;

    ll ans = 1;
    for (int i=0; i<k; i++) {
        ans = (ans * n) % MOD;
    }
    cout << ans << endl;
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
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<ll> a(n), cnt(31);
    for (ll &ai: a) {
        cin >> ai;

        for (int i=30; i>=0; i--) {
            if (ai & (1 << i)) cnt[i]++;
        }
    }

    ll ans = 0;
    for (int i=30; i>=0; i--) {
        int need = n - cnt[i];
        if (need <= k) {
            k -= need;
            ans += (1 << i);
        }
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
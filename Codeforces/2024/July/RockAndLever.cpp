#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int msb(int x) { // find most significant (leftmost) bit of x
    int k = 0;
    while (x != 0) {
        x /= 2;
        k++;
    }

    return k - 1;
}

void solve() {
    int n, a;
    cin >> n;

    map<int, ll> mp;
    for (int i=0; i<n; i++) {
        cin >> a;
        mp[msb(a)]++;
    }

    ll ans = 0;
    for (auto [mostSignificantBit, cnt]: mp) {
        ans += (cnt * (cnt - 1) / 2);
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
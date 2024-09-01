#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    ll g = 0;
    for (ll &ai: a) {
        cin >> ai;
        g = __gcd(g, ai);
    }

    int ans = 0;
    for (ll i=1; i*i<=g; i++) {
        if (g % i == 0) ans += (1 + (g != i * i));
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
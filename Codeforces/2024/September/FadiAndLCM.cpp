#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll X;
    cin >> X;

    vector<ll> div;
    for (ll i=1; i*i<=X; i++) {
        if (X % i == 0) div.push_back(i);
    }

    ll ans = 1e12;
    for (ll d: div) {
        if (lcm(X / d, d) != X) continue;
        ans = min(ans, max(X / d, d));
    }
    cout << X / ans << " " << ans << endl;

    return 0;
}
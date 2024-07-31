#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

ll getMinMaxMultiplication(ll a1) {
    ll mn = 10, mx = 0;
    while (a1 > 0) {
        ll lastDigit = a1 % 10;

        a1 /= 10;
        mn = min(mn, lastDigit);
        mx = max(mx, lastDigit);
    }

    return mn * mx;
}

void solve() {
    ll a1, K;
    cin >> a1 >> K;

    for (ll i=0; i<K-1; i++) {
        ll x = getMinMaxMultiplication(a1);
        
        if (x == 0) break; // when x is zero, the result of each addition will always be the same
        a1 += x;
    }
    cout << a1 << endl;
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
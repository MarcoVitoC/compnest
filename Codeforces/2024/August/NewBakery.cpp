#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;

    if (a >= b) {
        cout << n * a << endl;
        return;
    }

    ll k = min(b - a, n); // use price b and reduce it until a, then continuously use price a
    ll kSum = (k * (b + (b - k + 1))) / 2; // sum of price a + 1 ... b - 1 + b
    ll remainingSum = (n - k) * a; // sum of price a

    cout << kSum + remainingSum << endl;
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
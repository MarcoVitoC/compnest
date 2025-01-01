#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll d1 = a, d2 = a + b, d3 = a + b + c;
    if (n <= d1) {
        cout << 1 << endl;
    } else if (n <= d2) {
        cout << 2 << endl; 
    } else if (n <= d3) {
        cout << 3 << endl;
    } else {
        ll x = n / d3;
        n -= (d3 * x);

        if (n == 0) {
            cout << 3 * x << endl;
        } else if (n <= d1) {
            cout << 3 * x + 1 << endl;
        } else if (n <= d2) {
            cout << 3 * x + 2 << endl;
        } else {
            cout << 3 * x + 3 << endl;
        }
    }
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
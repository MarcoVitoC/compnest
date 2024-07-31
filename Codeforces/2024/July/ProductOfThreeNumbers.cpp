#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MAXN = 1e9;

void solve() {
    int n;
    cin >> n;

    int a = MAXN, b = MAXN;
    for (ll i=2; i*i<=n; i++) {
        if (n % i == 0) {
            a = i;
            break;
        }
    }
    for (ll i=a+1; i*i<=n/a; i++) {
        if ((n / a) % i == 0) {
            b = i;
            break;
        }
    }

    ll ab = a * b;
    ll c = n / ab;
    if ((a * b * c) == n && c != a && c != b && c >= 2) {
        cout << "YES" << endl;
        cout << a << " " << b << " " << c << endl;
        return;
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
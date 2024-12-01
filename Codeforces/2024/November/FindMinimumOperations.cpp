#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << n << endl;
        return;
    }

    int ans = 0;
    while (n > 0) { // sum of the digits of n in base k
        ans += (n % k);
        n /= k;
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
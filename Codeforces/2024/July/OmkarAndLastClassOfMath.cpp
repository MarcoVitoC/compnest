#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) {
            cout << n / i << " " << n - (n / i) << endl;
            return;
        }
    }
    cout << n - 1 << " " << 1 << endl;
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
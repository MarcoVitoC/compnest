#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n + 5);
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for (int i=1; i<=n; i++) {
        for (int j=a[i]-i; j<=n; j+=a[i]) {
            if (j >= 0 && a[i] * a[j] == i + j && i < j) ans++;
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
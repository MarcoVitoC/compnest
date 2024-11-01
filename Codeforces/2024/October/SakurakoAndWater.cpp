#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for (int i=0; i<n; i++) {
        int mx = 0;
        for (int j=0; j<=n-i-1; j++) {
            if (a[j][i + j] < 0) {
                mx = max(mx, abs(a[j][i + j]));
            }
        }
        ans += mx;
    }
    for (int i=1; i<n; i++) {
        int mx = 0;
        for (int j=0; j<=n-i-1; j++) {
            if (a[i + j][j] < 0) {
                mx = max(mx, abs(a[i + j][j]));
            }
        }
        ans += mx;
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
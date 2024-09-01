#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int &ai: a) cin >> ai;
    for (int &bi: b) cin >> bi;

    int mx = INT_MIN;
    for (int i=0; i<n; i++) {
        mx = max(mx, a[i] - b[i]);
    }

    int ans = 0;
    for (int i=0; i<n; i++) {
        ans += (a[i] - b[i] == mx);
    }

    cout << ans << endl;
    for (int i=0; i<n; i++) {
        if (a[i] - b[i] == mx) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
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
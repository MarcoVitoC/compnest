#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (auto &ai: a) cin >> ai;
    for (auto &bi: b) cin >> bi;

    int ans = a[n - 1];
    for (int i=0; i<n-1; i++) {
        int diff = a[i] - b[i + 1];
        if (diff + ans > ans) {
            ans += diff;
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
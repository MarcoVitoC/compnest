#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    sort(all(a));

    ll ans = 0;
    int l = n - k - k, r = n - k;
    while (r < n) {
        ans += (a[l++] / a[r++]);
    }

    for (int i=0; i<n-k-k; i++) {
        ans += a[i];
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
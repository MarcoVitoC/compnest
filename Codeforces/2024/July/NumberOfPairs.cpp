#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    sort(all(a));

    ll ans = 0;
    // find the first (idx >= l - ai) with a lower_bound, and the first (idx > r - ai) with an upper_bound
    for (int i=0; i<n-1; i++) {
        int lb = lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin();
        int ub = upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin();

        ans += (ub - lb);
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
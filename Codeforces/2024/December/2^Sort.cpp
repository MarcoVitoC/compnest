#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (auto &ai: a) cin >> ai;

    vector<int> b(n);
    for (int i=0; i<n-1; i++) {
        if (a[i] < a[i + 1] * 2) b[i] = 1;
    }

    vector<int> ps(n + 1);
    ps[1] = b[0];
    for (int i=2; i<n; i++) {
        ps[i] = ps[i - 1] + b[i - 1];
    }

    int ans = 0;
    for (int i=0; i<=n-k; i++) {
        if (ps[i + k - 1] - ps[i - 1] == k) ans++;
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
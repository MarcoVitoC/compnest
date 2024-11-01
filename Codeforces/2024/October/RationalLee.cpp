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

    vector<int> w(k);
    for (int &wi: w) cin >> wi;
    sort(all(w), greater<int>());

    ll ans = 0;
    for (int i=k-1; i>=0; i--) {
        if (w[i] != 1) continue;

        ans += (a.back() * 2);
        a.pop_back();
        w.pop_back();
    }

    if (!a.empty()) {
        int p = 0;
        for (int x: w) {
            ans += (a.back() + a[p]);
            p += (x - 1);
            a.pop_back();
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
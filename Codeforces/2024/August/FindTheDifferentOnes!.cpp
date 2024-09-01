#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n + 5);
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }

    vector<int> p;
    for (int i=1; i<n; i++) {
        if (a[i] != a[i + 1]) p.push_back(i);
    }

    int q, l, r;
    cin >> q;

    while (q--)  {
        cin >> l >> r;

        int k = lower_bound(p.begin(), p.end(), l) - p.begin();
        if (k < p.size() && p[k] < r) {
            cout << p[k] << " " << p[k] + 1 << endl;
            continue;
        }
        cout << -1 << " " << -1 << endl;
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
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    sort(all(a), greater<int>());

    ll A = 0, B = 0;
    for (int i=0; i<n; i++) {
        if (i % 2 == 0) {
            A += a[i];
            continue;
        }

        if (k > 0) {
            int diff = abs(a[i] - a[i - 1]);
            a[i] += min(diff, k);
            k -= min(diff, k);
        }
        B += a[i];
    }

    cout << A - B << endl;
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
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (ll &ai: a) cin >> ai;

    sort(a.begin(), a.end() - 2);
    for (int i=0; i<n-2; i++) {
        a[n - 2] -= a[i];
    }
    cout << a[n - 1] - a[n - 2] << endl;
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
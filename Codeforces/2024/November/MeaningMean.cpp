#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, mx = 0;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) {
        cin >> ai;
        mx = max(mx, ai);
    }
    sort(all(a));

    int ans = a[0];
    for (int i=1; i<n; i++) {
        ans = (ans + a[i]) / 2;
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
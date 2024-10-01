#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int &ai: a) cin >> ai;
    for (int &bi: b) cin >> bi;

    vector<int> c(n);
    for (int i=0; i<n; i++) {
        c[i] = a[i] - b[i];
    }
    sort(all(c));

    ll ans = 0;
    for (int i=0; i<n; i++) {
        if (c[i] < 0) continue;

        int j = lower_bound(c.begin(), c.begin() + i, -c[i] + 1) - c.begin();
        ans += (i - j);
    }
    cout << ans << endl;

    return 0;
}
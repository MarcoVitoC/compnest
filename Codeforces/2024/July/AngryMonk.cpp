#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    for (int &ai: a) cin >> ai;
    sort(all(a));

    ll ans = 0, one = 0;
    for (int i=0; i<k-1; i++) {
        if (a[i] == 1) {
            one++;
            continue;
        }

        ans += (a[i] - 1);
        one += a[i];
    }
    cout << ans + one << endl;
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
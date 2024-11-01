#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, a;
    cin >> n;

    map<ll, int> mp;
    mp[0] = 1;
    ll sum = 0, ans = 0;
    for (int i=0; i<n; i++) {
        cin >> a;

        sum += a;
        if (!mp[sum]) {
            mp[sum] = 1;
            continue;
        }

        ans++;
        sum = 0;
        mp.clear();
        mp[0] = 1;
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
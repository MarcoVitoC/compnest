#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    map<int, int> mp;
    int mx = 0;
    for (int x: a) {
        if (x % k == 0) continue;
        mp[k - (x % k)]++;

        // find the max count since it'll cycled in max number of times
        mx = max(mx, mp[k - (x % k)]);
    }

    ll ans = 0;
    for (auto [ai, cnt]: mp) {
        if (cnt != mx) continue;

        // k * (cnt - 1) -> add k for all except the first element in the group
        // + ai -> add ai since it used for the first element in the group that doesn't need to be incremented by k
        // + 1 -> add 1 since x starts from 0
        ans = k * 1LL * (cnt - 1) + ai + 1;
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
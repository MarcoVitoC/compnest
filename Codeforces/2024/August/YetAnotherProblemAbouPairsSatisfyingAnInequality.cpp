#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int findMinDiff(vector<pair<int, int>>& vp, int l, int r, int x) {
    int k = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (x - vp[m].first > 0) {
            k = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    return k;
}

void solve() {
    int n, a;
    cin >> n;

    vector<pair<int, int>> vp;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a < i + 1) vp.push_back({i + 1, a});
    }

    ll ans = 0;
    for (int i=vp.size()-1; i>0; i--) {
        int k = findMinDiff(vp, 0, i - 1, vp[i].second);
        if (k != -1) {
            ans += (k + 1);
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
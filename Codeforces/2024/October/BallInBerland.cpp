#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int bs(vector<pair<int, int>>& vp, int x) {
    int l = 0, r = vp.size() - 1, k = vp.size();
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (vp[m].first > x) {
            k = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    return k;
}

void solve() {
    int a, b, k;
    cin >> a >> b >> k;

    vector<int> A(k), B(k);
    for (int &ai: A) cin >> ai;

    vector<pair<int, int>> vp;
    for (int i=0; i<k; i++) {
        cin >> B[i];
        vp.push_back({A[i], B[i]});
    }
    sort(all(vp));

    map<int, vector<int>> mp;
    for (int i=0; i<k; i++) {
        mp[vp[i].second].push_back(i);
    }

    ll ans = 0;
    for (int i=0; i<k; i++) {
        int pa = vp[i].first, pb = vp[i].second;
        int ubA = bs(vp, pa);
        int ubB = upper_bound(all(mp[pb]), i) - mp[pb].begin();

        ans += ((k - ubA) - (mp[pb].size() - ubB));
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
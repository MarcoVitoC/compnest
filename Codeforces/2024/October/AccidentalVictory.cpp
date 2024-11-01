#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, a;
    cin >> n;

    vector<pair<int, int>> vp;
    for (int i=0; i<n; i++) {
        cin >> a;
        vp.push_back({a, i + 1});
    }
    sort(all(vp));

    vector<ll> ps(n);
    ps[0] = vp[0].first;
    for (int i=1; i<n; i++) {
        ps[i] = ps[i - 1] + vp[i].first;
    }

    vector<int> ans;
    ans.push_back(vp[n - 1].second);
    for (int i=n-2; i>=0; i--) {
        if (ps[i] < vp[i + 1].first) break;
        ans.push_back(vp[i].second);
    }

    sort(all(ans));
    cout << ans.size() << endl;
    for (int x: ans) {
        cout << x << " ";
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
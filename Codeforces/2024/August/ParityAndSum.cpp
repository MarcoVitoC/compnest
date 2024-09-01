#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n), evn;
    ll mxOdd = -1;
    for (ll &ai: a) {
        cin >> ai;

        if (ai % 2 == 0) evn.push_back(ai);
        if (ai % 2 != 0) mxOdd = max(mxOdd, ai);
    }
    sort(all(evn));

    if (mxOdd == -1 || evn.empty()) {
        cout << 0 << endl;
        return;
    }

    int ans = evn.size();
    for (int i=0; i<evn.size(); i++) {
        if (mxOdd < evn[i]) {
            ans++;
            break;
        }
        mxOdd += evn[i];
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
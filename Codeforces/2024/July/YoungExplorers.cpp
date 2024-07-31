#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int N, e;
    cin >> N;

    map<int, int> mp;
    for (int i=0; i<N; i++) {
        cin >> e;
        mp[e]++;
    }

    int ans = 0, dump = 0;
    for (auto [explr, cnt]: mp) {
        if (dump > 0) {
            cnt += dump;
            dump = 0;
        }

        dump = cnt - (explr * (cnt / explr));
        ans += cnt / explr;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
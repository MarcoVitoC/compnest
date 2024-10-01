#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0;
    for (char c: s) {
        cnt1 += (c == '1');
        cnt0 += (c == '0');
    }

    int ans = min(cnt0, cnt1), pref0 = 0, pref1 = 0;
    for (char c: s) {
        pref0 += (c == '0');
        cnt0 -= (c == '0');

        pref1 += (c == '1');
        cnt1 -= (c == '1');

        ans = min({ans, pref0 + cnt1, pref1 + cnt0});
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
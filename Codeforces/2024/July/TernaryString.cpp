#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MAXN = 1e9 + 7;

void solve() {
    string s;
    cin >> s;

    map<char, int> idx;
    idx['1'] = -1;
    idx['2'] = -1;
    idx['3'] = -1;
    int len = s.length(), ans = MAXN;
    for (int i=0; i<len; i++) {
        idx[s[i]] = i;

        if (idx['1'] != -1 && idx['2'] != -1 && idx['3'] != -1) {
            int r = max({idx['1'], idx['2'], idx['3']});
            int l = min({idx['1'], idx['2'], idx['3']});
            ans = min(ans, r - l + 1);
        }
    }
    cout << (ans == MAXN ? 0 : ans) << endl;
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
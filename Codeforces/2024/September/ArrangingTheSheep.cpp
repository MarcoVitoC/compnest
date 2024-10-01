#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> pos;
    for (int i=0; i<n; i++) {
        if (s[i] == '*') pos.push_back(i);
    }

    ll ans = 0, k = pos.size() / 2;
    for (int i=0; i<pos.size(); i++) {
        int dist = abs(pos[k] - pos[i]) - 1;
        int sheeps = abs(k - i) - 1;

        ans += (dist - sheeps);
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
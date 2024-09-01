#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, a;
    cin >> n;

    map<int, int> mp;
    for (int i=0; i<n; i++) {
        cin >> a;
        mp[a]++;
    }

    int mx = 0;
    for (auto [num, cnt]: mp) {
        mx = max(mx, cnt);
    }

    cout << n - mx << endl;
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
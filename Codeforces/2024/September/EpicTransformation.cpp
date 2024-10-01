#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp;
    for (int &ai: a) {
        cin >> ai;
        mp[ai]++;
    }

    int mx = 0;
    for (auto [x, cnt]: mp) {
        mx = max(mx, cnt);
    }

    int ans = (mx * 2 <= n) ? 0 : mx * 2 - n;
    cout << ((n % 2 != 0) ? max(1, ans) : ans) << endl;
    
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
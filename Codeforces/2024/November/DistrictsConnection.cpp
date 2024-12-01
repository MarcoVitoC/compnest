#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    vector<pair<int, int>> roads;
    for (int i=1; i<n; i++) {
        if (a[i] != a[0]) roads.push_back({1, i + 1});
    }

    if (roads.empty()) {
        cout << "NO" << endl;
        return;
    }

    for (int i=1; i<n; i++) {
        if (a[i] == a[0]) {
            roads.push_back({i + 1, roads[0].second});
        }
    }

    cout << "YES" << endl;
    for (auto p: roads) {
        cout << p.first << " " << p.second << endl;
    }
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
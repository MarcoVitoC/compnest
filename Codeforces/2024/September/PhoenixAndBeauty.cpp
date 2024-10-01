#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k, b;
    cin >> n >> k;

    set<int> s;
    for (int i=0; i<n; i++) {
        cin >> b;
        s.insert(b);
    }

    if (s.size() > k) {
        cout << -1 << endl;
        return;
    }

    cout << n * k << endl;
    for (int i=0; i<n; i++) {
        for (auto x: s) {
            cout << x << " ";
        }
        for (int j=0; j<k-s.size(); j++) {
            cout << 1 << " ";
        }
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
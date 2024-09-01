#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int mn = 1e9;
    for (int &ai: a) {
        cin >> ai;
        mn = min(mn, ai);
    }

    vector<int> b(a);
    sort(all(b));

    for (int i=0; i<n; i++) {
        if (a[i] < mn || (a[i] % mn != 0 && a[i] != b[i])) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
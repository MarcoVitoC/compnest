#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    vector<int> b(n + 5, 0);
    b[a[0]] ^= 1;
    for (int i=1; i<n; i++) {
        if (a[i] == 1 && b[a[i] + 1] == 0) {
            cout << "NO" << endl;
            return;
        }
        if (a[i] > 1 && a[i] < n && (b[a[i] - 1] == 0 && b[a[i] + 1] == 0)) {
            cout << "NO" << endl;
            return;
        }
        if (a[i] == n && b[a[i] - 1] == 0) {
            cout << "NO" << endl;
            return;
        }

        b[a[i]] ^= 1;
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
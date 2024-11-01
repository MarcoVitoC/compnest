#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int ceil(int a, int b) {
    return (a + b - 1) / b;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int mx = *max_element(all(a));
    if (n % 2 == 0) {
        cout << mx + ceil(n, 2) << endl;
        return;
    }

    for (int i=0; i<n; i++) {
        if (i % 2 == 0 && a[i] == mx) {
            cout << mx + ceil(n, 2) << endl;
            return;
        }
    }
    cout << mx + ceil(n, 2) - 1 << endl;
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
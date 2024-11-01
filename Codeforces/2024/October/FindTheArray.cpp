#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    ll sum = 0, sumOdd = 0;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];

        sum += a[i];
        if (i % 2 != 0) {
            sumOdd += a[i];
        }
    }

    for (int i=0; i<n; i++) {
        if (sumOdd <= sum / 2) {
            cout << ((i % 2 == 0) ? a[i] : 1) << " ";
            continue;
        }

        cout << ((i % 2 == 0) ? 1 : a[i]) << " ";
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
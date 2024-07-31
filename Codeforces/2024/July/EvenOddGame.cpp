#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    sort(all(a), greater<int>());

    ll alice = 0, bob = 0;
    for (int i=0; i<n; i++) {
        if (i % 2 == 0 && a[i] % 2 == 0) alice += a[i];
        if (i % 2 != 0 && a[i] % 2 != 0) bob += a[i];
    }

    if (alice == bob) {
        cout << "Tie" << endl;
    } else if (alice > bob) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
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
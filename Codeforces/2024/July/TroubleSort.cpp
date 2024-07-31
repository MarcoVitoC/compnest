#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int b, zero = 0, one = 0;
    for (int i=0; i<n; i++) {
        cin >> b;

        if (b == 1) one++;
        else zero++;
    }

    cout << (is_sorted(all(a)) || (zero != n && one != n) ? "Yes" : "No") << endl;
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
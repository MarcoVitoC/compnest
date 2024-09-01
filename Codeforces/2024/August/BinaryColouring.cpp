#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll x;
    cin >> x;

    vector<int> ans(32, 0);
    for (int i=0; i<32; i++) {
        int bit = (x >> i) & 1; // traverse every bit of x from the right (LSB)

        if (bit == 0) continue;
        if (i == 0 || (ans[i - 1] != 1 && ans[i] != 1)) {
            ans[i] = 1;
            continue;
        }

        if (ans[i - 1] == 1 || ans[i] == 1) {
            ans[i - 1] = (ans[i - 1] == 0) ? 0 : -1;
            ans[i] = 0;
            ans[i + 1] = 1;
        }
    }

    cout << 32 << endl;
    for (int bit: ans) {
        cout << bit << " ";
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
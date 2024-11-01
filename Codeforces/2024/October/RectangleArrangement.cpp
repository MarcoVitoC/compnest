#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, w, h;
    cin >> n;

    int maxW = 0, maxH = 0;
    for (int i=0; i<n; i++) {
        cin >> w >> h;

        maxW = max(maxW, w);
        maxH = max(maxH, h);
    }
    cout << 2 * (maxW + maxH) << endl;
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
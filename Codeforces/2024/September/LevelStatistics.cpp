#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, p = 0, c = 0;
    cin >> n;

    bool isValidStatistics = true;
    for (int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;

        if (x < p || y < c || y - c > x - p) {
            isValidStatistics = false;
        }

        p = x, c = y;
    }

    cout << ((isValidStatistics) ? "YES" : "NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
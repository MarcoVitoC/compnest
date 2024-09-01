#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int m;
    cin >> m;

    vector<vector<int>> a(2, vector<int>(m));
    for (int i=0; i<2; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }

    int topSum = 0, bottomSum = 0;
    for (int x: a[0]) topSum += x;

    int ans = 1e9;
    for (int i=0; i<m; i++) {
        topSum -= a[0][i];
        ans = min(ans, max(topSum, bottomSum));
        bottomSum += a[1][i];
    }
    cout << ans << endl;
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
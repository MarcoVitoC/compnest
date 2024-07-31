#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<char>> m(n, vector<char>(n));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> m[i][j];
        }
    }

    for (int i=0; i<n-1; i++) {
        for (int j=n-2; j>=0; j--) {
            if (m[i][j] == '1' && m[i + 1][j] == '0' && m[i][j + 1] == '0') {
                cout << "NO" << endl;
                return;
            }
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
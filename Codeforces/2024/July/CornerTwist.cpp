#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> a(n, vector<char>(m));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }

    vector<vector<char>> b(n, vector<char>(m));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> b[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        int raSum = 0, rbSum = 0;
        for (int j=0; j<m; j++) {
            raSum += (a[i][j] - '0');
            rbSum += (b[i][j] - '0');
        }
        
        if (raSum % 3 != rbSum % 3) {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i=0; i<m; i++) {
        int caSum = 0, cbSum = 0;
        for (int j=0; j<n; j++) {
            caSum += (a[j][i] - '0');
            cbSum += (b[j][i] - '0');
        }

        if (caSum % 3 != cbSum % 3) {
            cout << "NO" << endl;
            return;
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
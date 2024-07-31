#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> c(n, vector<char>(m));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> c[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (c[i][j] == '-') {
                cout << c[i][j];
                continue;
            }

            if (i % 2 == 0) {
                cout << ((j % 2 == 0) ? 'W' : 'B');
            } else {
                cout << ((j % 2 == 0) ? 'B' : 'W');
            }
        }
        cout << endl;
    }

    return 0;
}
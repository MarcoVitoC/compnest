#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    vector<vector<char>> s(9, vector<char>(9));
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cin >> s[i][j];
        }
    }

    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cout << ((s[i][j] == '3') ? '1' : s[i][j]);
        }
        cout << endl;
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
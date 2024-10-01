#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    string a, b;
    cin >> a >> b;

    vector<vector<int>> cntA(26, vector<int>(n)), cntB(26, vector<int>(n));
    for (int i=0; i<26; i++) {
        cntA[i][0] = ((a[0] - 'a') == i);
        cntB[i][0] = ((b[0] - 'a') == i);
        for (int j=1; j<n; j++) {
            cntA[i][j] = ((a[j] - 'a') == i) ? cntA[i][j - 1] + 1 : cntA[i][j - 1];
            cntB[i][j] = ((b[j] - 'a') == i) ? cntB[i][j - 1] + 1 : cntB[i][j - 1];
        }
    }

    int l, r;
    while (q--) {
        cin >> l >> r;

        int ans = 0;
        for (int i=0; i<26; i++) {
            int psA = (l == 1) ? cntA[i][r - 1] : cntA[i][r - 1] - cntA[i][l - 2];
            int psB = (l == 1) ? cntB[i][r - 1] : cntB[i][r - 1] - cntB[i][l - 2];

            ans += abs(psA - psB);
        }
        cout << ans / 2 << endl;
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
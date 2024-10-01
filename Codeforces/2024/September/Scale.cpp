#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<string> s(n);
    for (int i=0; i<n; i++) {
        cin >> s[i];
    }

    for (int i=0; i<n; i+=k) {
        for (int j=0; j<n; j+=k) {
            cout << s[i][j];
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
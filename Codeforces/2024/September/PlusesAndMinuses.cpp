#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    string s;
    cin >> s;

    ll n = s.length(), ps = 0, mn = 0, res = s.length();
    for (int i=0; i<n; i++) {
        ps = (s[i] == '+') ? ps + 1 : ps - 1;
        if (ps < mn) {
            mn = ps;
            res += (i + 1);
        }
    }

    cout << res << endl;
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
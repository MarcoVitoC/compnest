#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string t = "";
    t += s[0];
    for (int i=1; i<n; i++) {
        if ((s[i] == '0' && s[i] != t.back()) || s[i] == '1') {
            t += s[i];
        }
    }

    int c0 = 0, c1 = 0;
    for (char c: t) {
        if (c == '0') c0++;
        else c1++;
    }
    cout << (c1 > c0 ? "Yes" : "No") << endl;
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
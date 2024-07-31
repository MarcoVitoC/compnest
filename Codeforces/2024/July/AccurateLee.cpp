#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (is_sorted(all(s))) {
        cout << s << endl;
        return;
    }

    int leadingZeroes = 0, trailingOnes = 0;
    for (char &c: s) {
        if (c == '1') break;
        leadingZeroes++;
    }
    for (int i=n-1; i>=0; i--) {
        if (s[i] == '0') break;
        trailingOnes++;
    }

    for (int i=0; i<leadingZeroes+1; i++) {
        cout << 0;
    }
    for (int i=0; i<trailingOnes; i++) {
        cout << 1;
    }
    cout << endl;
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
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    int pt = 0;
    for (int ps=0; ps<s.length(); ps++) {
        if (s[ps] == '?' && pt < t.length()) {
            s[ps] = t[pt];
            pt++;
        } else if (pt < t.length() && s[ps] == t[pt]) pt++;
    }

    if (pt != t.length()) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (char c: s) {
        cout << ((c == '?') ? 'a' : c);
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int m;
    cin >> m;

    string s;
    while (m--) {
        cin >> s;

        int len = s.length(), ok = 1;
        if (len != n) {
            cout << "NO" << endl;
            continue;
        }

        map<int, char> mp1;
        map<char, int> mp2;
        for (int i=0; i<len; i++) {
            if (!mp1.count(a[i])) mp1[a[i]] = s[i];
            if (!mp2.count(s[i])) mp2[s[i]] = a[i];
            if (mp1[a[i]] != s[i] || mp2[s[i]] != a[i]) {
                ok = 0;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
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
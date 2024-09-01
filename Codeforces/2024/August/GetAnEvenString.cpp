#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    string s;
    cin >> s;

    int len = s.length(), k = 0;
    vector<int> ch(26, 0);
    for (char c: s) {
        if (ch[c - 'a'] == 0) {
            ch[c - 'a'] ^= 1;
            continue;
        }

        k += 2;
        fill(all(ch), 0);
    }

    cout << len - k << endl;
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
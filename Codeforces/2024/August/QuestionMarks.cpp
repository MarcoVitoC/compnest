#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> cnt;
    for (char c: s) {
        cnt[c]++;
    }

    cout << min(cnt['A'], n) + min(cnt['B'], n) + min(cnt['C'], n) + min(cnt['D'], n) << endl;
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
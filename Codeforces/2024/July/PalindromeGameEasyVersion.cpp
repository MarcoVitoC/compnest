#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
    for (char c: s) {
        cnt += (c == '0');
    }

    cout << ((cnt == 1 || cnt % 2 == 0) ? "BOB" : "ALICE") << endl;
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
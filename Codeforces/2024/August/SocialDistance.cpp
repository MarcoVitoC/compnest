#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int ans = 1, cnt = 0;
    for (char c: s) {
        if (c == '1') {
            if (cnt <= k) ans--;
            cnt = 0;
        } else if (cnt > k) {
            ans++;
            cnt = 0;
        }

        cnt++;
    }
    
    cout << ans << endl;
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
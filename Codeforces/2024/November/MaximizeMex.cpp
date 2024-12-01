#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, x, a;
    cin >> n >> x;

    vector<int> cnt(n + 1);
    for (int i=0; i<n; i++) {
        cin >> a;

        if (a <= n) {
            cnt[a]++; 
        }
    }

    int ans = 0;
    for (int i=0; i<=n; i++) {
        if (cnt[i] == 1) continue;
        if (cnt[i] == 0) {
            ans = i;
            break;
        }

        if (i + x > n) continue;
        cnt[i + x] += (cnt[i] - 1);
        cnt[i] = 1;
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
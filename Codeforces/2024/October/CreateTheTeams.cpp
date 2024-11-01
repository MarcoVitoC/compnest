#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    sort(all(a));

    int ans = 0, len = 1;
    for (int i=n-1; i>=0; i--) {
        if (a[i] * len >= x) {
            ans++;
            len = 0;
        }
        len++;
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
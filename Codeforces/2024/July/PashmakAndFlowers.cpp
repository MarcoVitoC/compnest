#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, b;
    cin >> n;

    map<int, ll> cnt;
    int mn = 1e9, mx = 0;
    for (int i=0; i<n; i++) {
        cin >> b;

        cnt[b]++;
        mn = min(mn, b);
        mx = max(mx, b);
    }

    ll numberOfWays = (mx == mn) ? (cnt[mx] * (cnt[mx] - 1)) / 2 : cnt[mx] * cnt[mn];
    cout << mx - mn << " " << numberOfWays << endl;

    return 0;
}
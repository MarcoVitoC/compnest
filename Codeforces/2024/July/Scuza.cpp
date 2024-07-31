#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int bs(vector<ll>& mx, int n, int k) {
    int l = 0, r = n - 1, i = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (k >= mx[m]) {
            i = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    return i;
}

void solve() {
    ll n, q, a, k;
    cin >> n >> q;

    vector<ll> ps(n), mx(n);
    for (int i=0; i<n; i++) {
        cin >> a;

        ps[i] = (i == 0) ? a : ps[i - 1] + a;
        mx[i] = (i == 0) ? a : max(mx[i - 1], a);
    }
    
    while (q--) {
        cin >> k;

        int i = bs(mx, n, k);
        cout << ((i == -1) ? 0 : ps[i]) << " ";
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
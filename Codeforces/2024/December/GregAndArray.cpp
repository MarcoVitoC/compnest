#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n + 1);
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> range(m + 5);
    vector<ll> d(m + 5);
    for (int i=1; i<=m; i++) {
        int l, r;
        cin >> l >> r >> d[i];

        range[i] = {l, r};
    }

    vector<ll> b(m + 5);
    for (int i=0; i<k; i++) {
        int x, y;
        cin >> x >> y;

        b[x]++, b[y + 1]--;
    }
    for (int i=1; i<=m; i++) {
        b[i] += b[i - 1];
    }
    for (int i=1; i<=m; i++) {
        b[i] *= d[i];
    }

    vector<ll> c(n + 5);
    for (int i=1; i<=m; i++) {
        int l = range[i].first, r = range[i].second;

        c[l] += b[i];
        c[r + 1] -= b[i];
    }
    for (int i=1; i<=n; i++) {
        c[i] += c[i - 1];
    }

    for (int i=1; i<=n; i++) {
        cout << a[i] + c[i] << " ";
    }
    cout << endl;

    return 0;
}
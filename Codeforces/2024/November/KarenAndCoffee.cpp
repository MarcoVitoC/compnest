#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MAXN = 2e5 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> c(MAXN);
    for (int i=0; i<n; i++) {
        int l, r;
        cin >> l >> r;

        c[l]++, c[r + 1]--;
    }

    for (int i=1; i<=MAXN; i++) {
        c[i] += c[i - 1];
    }

    for (int i=1; i<=MAXN; i++) {
        c[i] = (c[i] >= k);
    }

    for (int i=1; i<=MAXN; i++) {
        c[i] += c[i - 1];
    }

    for (int i=0; i<q; i++) {
        int a, b;
        cin >> a >> b;

        cout << c[b] - c[a - 1] << endl;
    }

    return 0;
}
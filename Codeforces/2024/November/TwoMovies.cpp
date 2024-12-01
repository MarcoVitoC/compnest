#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (auto &ai: a) cin >> ai;
    for (auto &bi: b) cin >> bi;

    int r1 = 0, r2 = 0, x = 0, y = 0;
    for (int i=0; i<n; i++) {
        if (a[i] > b[i]) r1 += a[i];
        else if (b[i] > a[i]) r2 += b[i];
        else if (a[i] == 1 && b[i] == 1) x++;
        else if (a[i] == -1 && b[i] == -1) y++;
    }

    while (x--) {
        if (min(r1, r2) == r1) r1++;
        else r2++;
    }

    while (y--) {
        if (max(r1, r2) == r1) r1--;
        else r2--;
    }

    cout << min(r1, r2) << endl;
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
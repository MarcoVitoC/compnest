#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n + 1, 1);
    for (int i=y-1; i>=1; i--) {
        if (a[i + 1] == 1) a[i] *= -1;
    }
    for (int i=x+1; i<=n; i++) {
        if (a[i - 1] == 1) a[i] *= -1;
    }

    for (int i=1; i<=n; i++) {
        cout << a[i] << " ";
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
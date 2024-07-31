#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (n % 2 != 0) {
        cout << n / 2 << " " << n / 2 << " " << 1 << endl;
    } else if (n % 2 == 0 && n % 4 != 0) {
        cout << n / 2 - 1 << " " << n / 2 - 1 << " " << 2 << endl;
    } else {
        cout << n / 4 << " " << n / 4 << " " << n / 2 << endl;
    }
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
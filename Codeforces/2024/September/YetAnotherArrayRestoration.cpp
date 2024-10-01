#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    for (int d=1; d<=y-x; d++) {
        if ((y - x) % d != 0) continue; // difference should be the divisor of (y - x)
        if ((y - x) / d >= n) continue; // numbers from (x + d) to y shouldn't >= n

        int x = min((y - 1) / d, n - 1); // count the number of steps from y, y - d, y - 2d, ... > 1 and shouldn't >= n
        int a0 = y - d * x; // calculate the first element of the sequence
        for (int i=0; i<n; i++) {
            cout << a0 + i * d << " ";
        }
        
        cout << endl;
        break;
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
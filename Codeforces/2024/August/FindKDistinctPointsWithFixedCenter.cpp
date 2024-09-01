#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int xc, yc, k;
    cin >> xc >> yc >> k;

    for (int i=1; i<=k/2; i++) {
        cout << xc - i << " " << yc << endl;
        cout << xc + i << " " << yc << endl;
    }
    
    if (k % 2 != 0) {
        cout << xc << " " << yc << endl;
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
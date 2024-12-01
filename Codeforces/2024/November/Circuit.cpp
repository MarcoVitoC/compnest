#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, a;
    cin >> n;

    int one = 0, zero = 0;
    for (int i=0; i<2*n; i++) {
        cin >> a;
        
        if (a == 0) zero++;
        else one++;
    }

    int mn = (one % 2 != 0 || zero % 2 != 0), mx = min(one, zero);
    cout << mn << " " << mx << endl;
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
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    int x = 0, i = 1;
    while (x >= -n && x <= n) {
        int u = 2 * i - 1;

        if (i % 2 != 0) x -= u;
        else x += u; 

        i++;
    }

    cout << ((i % 2 == 0) ? "Sakurako" : "Kosuke") << endl;
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
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int x, y, n;
    cin >> x >> y >> n;

    vector<int> f = {x, y, y - x, -x, -y, x - y};
    cout << ((f[(n - 1) % 6] % MOD) + MOD) % MOD << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
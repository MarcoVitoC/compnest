#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    int ans = 0;
    while (m > n) {
        ans += 1 + (m % 2 != 0);
        m = (m % 2 == 0) ? m / 2 : (m + 1) / 2;
    }
    cout << ans + (n - m) << endl;

    return 0;
}
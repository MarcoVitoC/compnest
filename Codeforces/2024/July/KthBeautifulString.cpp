#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int s = 1, l = n - 2;
    while (k >= s + (n - l - 1)) {
        s += (n - l - 1);
        l--;
    }

    int nextS = s + (n - l - 1);
    int r = l + (nextS - k);

    string ans(n, 'a');
    ans[l] = ans[r] = 'b';
    cout << ans << endl;
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
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int cnt = 0, sum = 0;
    vector<int> a(n);
    for (int &ai: a) {
        cin >> ai;

        sum += ai;
        if (ai % x == 0) cnt++;
    }

    if (cnt == n) {
        cout << -1 << endl;
        return;
    } else if (sum % x != 0) {
        cout << n << endl;
        return;
    }

    int k = sum, ans = 0;
    for (int i=0; i<n; i++) { // try to erase prefix numbers
        if (k % x != 0) {
            ans = max(ans, (n - 1) - i + 1);
            break;
        }
        k -= a[i];
    }

    k = sum;
    for (int i=n-1; i>=0; i--) { // try to erase suffix numbers
        if (k % x != 0) {
            ans = max(ans, i + 1);
            break;
        }
        k -= a[i];
    }
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
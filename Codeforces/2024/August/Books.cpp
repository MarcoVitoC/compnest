#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int sum = 0, ans = 0, r = 0;
    for (int i=0; i<n; i++) {
        while (r < n && sum + a[r] <= t) {
            sum += a[r];
            r++;
        }

        ans = max(ans, r - i);
        sum -= a[i];
    }
    cout << ans << endl;

    return 0;
}
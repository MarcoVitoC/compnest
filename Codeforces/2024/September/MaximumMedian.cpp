#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    sort(all(a));

    int mid = n / 2, l = 1, r = 2e9, ans = 0;
    vector<int> b(a.begin() + mid, a.end());
    while (l <= r) {
        int m = l + (r - l) / 2;

        ll sum = 0;
        for (int bi: b) {
            sum += max(0, m - bi);
        }

        if (sum <= k) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << ans << endl;

    return 0;
}
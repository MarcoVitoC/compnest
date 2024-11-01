#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int INF = 1e9;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int x = INF, y = INF, ans = 0;
    for (int ai: a) {
        if (x > y) swap(x, y);

        if (ai <= x) {
            x = ai;
        } else if (ai <= y) {
            y = ai;
        } else {
            x = ai;
            ans++;
        }
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
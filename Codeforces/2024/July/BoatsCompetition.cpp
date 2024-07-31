#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> w(n);
    for (int &wi: w) {
        cin >> wi;
    }

    int ans = 0;
    for (int i=2; i<=2*n; i++) {
        map<int, int> cnt;
        for (int j=0; j<n; j++) {
            cnt[w[j]]++;
        }

        int k = 0;
        for (int j=0; j<n; j++) {
            if (i - w[j] < 0) continue;

            if (cnt[i - w[j]] > 0) {
                cnt[i - w[j]]--;
                k++;
            }
        }

        ans = max(ans, k / 2);
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
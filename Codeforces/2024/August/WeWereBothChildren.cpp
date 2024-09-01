#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, a;
    cin >> n;

    vector<int> cnt(n + 5), mxF(n + 5);
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a <= n) cnt[a]++;
    }

    // find the most recent place where the frog is landed from each hop distance
    for (int i=1; i<=n; i++) {
        for (int j=i; j<=n; j+=i) {
            mxF[j] += cnt[i];
        }
    }

    cout << *max_element(all(mxF)) << endl;
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
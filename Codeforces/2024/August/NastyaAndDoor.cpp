#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    vector<int> pk(n, 0), ps(n);
    for (int i=1; i<n-1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) pk[i] ^= 1;
        ps[i] = ps[i - 1] + pk[i];
    }

    int t = 0, leftBorder = 0;
    for (int l=0; l+k-1<n; l++) {
        int p = ps[l + k - 2] - ps[l];
        if (p > t) {
            t = p;
            leftBorder = l;
        }
    }

    cout << t + 1 << " " << leftBorder + 1 << endl;
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
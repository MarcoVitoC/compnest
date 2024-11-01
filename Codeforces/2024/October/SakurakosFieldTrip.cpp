#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    
    for (int i=1; i<n/2; i++) {
        int cnt1 = 0, cnt2 = 0;

        if (a[i] == a[i - 1]) cnt1++;
        if (a[n - i - 1] == a[n - i]) cnt1++;

        if (a[i] == a[n - i]) cnt2++;
        if (a[n - i - 1] == a[i - 1]) cnt2++;

        if (min(cnt1, cnt2) == cnt2) {
            swap(a[i], a[n - i - 1]);
        }
    }

    int ans = 0;
    for (int i=0; i<n-1; i++) {
        if (a[i] == a[i + 1]) ans++;
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
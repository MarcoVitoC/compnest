#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int ans = INT_MAX;
    for (int i=0; i<n; i++) {
        int prev = 0;
        for (int j=0; j<i; j++) {
            if (a[j] != a[i]) prev++;
        }

        int next = 0;
        for (int j=i+1; j<n; j++) {
            if (a[j] > a[i]) next++;
        }

        ans = min(ans, prev + next);
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
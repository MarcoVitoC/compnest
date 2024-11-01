#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int INF = 1e9;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n + 1);
    for (int i=1; i<=n; i++) {
        cin >> p[i];
    }

    string s;
    cin >> s;

    vector<int> ans(n + 1), v(n + 1);
    for (int i=1; i<=n; i++) {
        if (v[i]) continue;

        int cnt = 0; // store the total of the black integers of every cycle
        while (!v[i]) { // traverse a cycle while counting the number of black integer
            v[i] = 1;
            cnt += (s[i - 1] == '0');
            i = p[i];
        }

        while (v[i] != INF) { // initialize every element's value in current cycle with cnt
            ans[i] = cnt;
            v[i] = INF;
            i = p[i];
        }
    }

    for (int i=1; i<=n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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
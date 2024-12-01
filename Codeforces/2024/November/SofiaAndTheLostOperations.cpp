#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int &ai: a) cin >> ai;
    for (int &bi: b) cin >> bi;

    int m;
    cin >> m;
 
    vector<int> d(m);
    map<int, int> mp;
    for (int &di: d) {
        cin >> di;
        mp[di]++;
    }

    if (count(all(b), d[m - 1]) == 0) {
        cout << "NO" << endl;
        return;
    }
 
    for (int i=0; i<n; i++) {
        if (b[i] == a[i]) continue;
        if (mp[b[i]] == 0) {
            cout << "NO" << endl;
            return;
        }

        mp[b[i]]--;
    }
    cout << "YES" << endl;
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
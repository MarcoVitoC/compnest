#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n + 1);
    for (auto &ai: a) {
        cin >> ai;
        b[ai]++;
    }

    vector<int> c;
    for (int i=1; i<=n; i++) {
        if (!b[i]) c.push_back(i);
    }

    int k = 0, sc = c.size();
    vector<int> d(n + 1);
    for (int i=0; i<n; i++) {
        if (!d[a[i]]) {
            cout << a[i] << " ";
            d[a[i]]++;
            continue;
        }

        cout << c[k % sc] << " ";
        k++;
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
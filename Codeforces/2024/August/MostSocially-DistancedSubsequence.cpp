#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int &pi: p) cin >> pi;

    set<int> s;
    for (int i=1; i<n-1; i++) {
        if ((p[i] > p[i - 1] && p[i] < p[i + 1]) || (p[i] < p[i - 1] && p[i] > p[i + 1])) {
            s.insert(i);
        }
    }

    cout << n - s.size() << endl;
    for (int i=0; i<n; i++) {
        if (s.count(i)) continue;
        cout << p[i] << " ";
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
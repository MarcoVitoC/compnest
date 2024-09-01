#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    vector<int> p;
    for (int i=0; i<n; i++) {
        if (a[i] == b[i]) continue;

        p.push_back(i + 1);
        p.push_back(1);
        p.push_back(i + 1);
    }

    cout << p.size() << " ";
    for (int pi: p) {
        cout << pi << " ";
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
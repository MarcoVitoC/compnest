#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MAXB = 1e9;

void solve() {
    int n;
    cin >> n;

    int m = n * (n - 1) / 2;
    vector<int> b(m);
    for (int &bi: b) {
        cin >> bi;
    }
    sort(all(b));

    for (int i=0; i<m; i+=n) {
        cout << b[i] << " ";
        n--;
    }
    cout << MAXB << endl;
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
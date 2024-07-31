#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int &hi: h) {
        cin >> hi;
    }
    sort(all(h));

    if (n == 2) {
        cout << h[0] << " " << h[1] << endl;
        return;
    }

    int minDiff = 1e9, k = 0;
    for (int i=1; i<n; i++) {
        if (abs(h[i] - h[i - 1]) < minDiff) {
            minDiff = abs(h[i] - h[i - 1]);
            k = i;
        }
    }

    for (int i=k; i<n; i++) {
        cout << h[i] << " ";
    }
    for (int i=0; i<k; i++) {
        cout << h[i] << " ";
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
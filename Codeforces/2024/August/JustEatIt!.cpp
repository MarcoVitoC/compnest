#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    ll sum = 0;
    for (int x: a) {
        sum += x;
        if (sum <= 0) {
            cout << "NO" << endl;
            return;
        }
    }

    sum = 0;
    for (int i=n-1; i>=0; i--) {
        sum += a[i];
        if (sum <= 0) {
            cout << "NO" << endl;
            return;
        }
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
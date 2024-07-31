#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int k = n - 1;
    while (k > 0 && a[k - 1] >= a[k]) k--;
    while (k > 0 && a[k - 1] <= a[k]) k--;

    cout << k << endl;
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
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    sort(all(a));

    int mid = n / 2;
    cout << a[mid] << " ";

    for (int i=1; i<=n-1; i++) {
        mid = (i % 2 != 0) ? mid - i : mid + i;
        cout << a[mid] << " ";
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
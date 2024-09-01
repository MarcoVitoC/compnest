#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << -1 << endl;
        return;
    }

    vector<int> ans(n);
    int m = n / 2;
    ans[m] = 1;
    for (int i=m+1, j=2; i<n; i++, j+=2) {
        ans[i] = j;
    }
    for (int i=m-1, j=3; i>=0; i--, j+=2) {
        ans[i] = j;
    }

    for (int x: ans) {
        cout << x << " ";
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
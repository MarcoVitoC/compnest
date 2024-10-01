#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int ceil(int a, int b) {
    return (a + b - 1) / b;
}

void solve() {
    int n;
    cin >> n;

    int x, y;
    cin >> x >> y;

    cout << ceil(n, min(x, y)) << endl;
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
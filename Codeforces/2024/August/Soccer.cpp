#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    bool isXAlwaysLeading = max(x1, y1) == x1 && max(x2, y2) == x2;
    bool isYAlwaysLeading = max(x1, y1) == y1 && max(x2, y2) == y2;
    
    cout << ((isXAlwaysLeading || isYAlwaysLeading) ? "YES" : "NO") << endl;
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
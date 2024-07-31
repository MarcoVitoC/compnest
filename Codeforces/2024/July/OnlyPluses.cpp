#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int ans = a * b * c;
    for (int i=0; i<5; i++) {
        int mn = min({a, b, c});
        if (mn == a) a++;
        else if (mn == b) b++;
        else if (mn == c) c++;

        ans = max(ans, a * b * c);
    }
    cout << ans << endl;
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
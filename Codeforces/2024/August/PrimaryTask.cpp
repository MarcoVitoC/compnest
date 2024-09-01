#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    string n;
    cin >> n;

    int len = n.length();
    if (len <= 2 || n[0] != '1' || n[1] != '0') {
        cout << "NO" << endl;
        return;
    }

    if ((len - 2 == 1 && (n[2] - '0') < 2) || (len - 2 >= 2 && (n[2] - '0') < 1)) {
        cout << "NO" << endl;
        return;
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
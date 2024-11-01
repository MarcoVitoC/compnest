#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    double sq = sqrt(n);
    if (sq - (int)sq != 0) {
        cout << "No" << endl;
        return;
    }

    string s1(sq, '1');
    string s2 = '1' + string(sq - 2, '0') + '1';
    for (int i=0; i<n; i+=sq) {
        string t = s.substr(i, sq);

        if ((i == 0 || i == n - sq) && t != s1) {
            cout << "No" << endl;
            return;
        }
        
        if (i > 0 && i < n - sq && t != s2) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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
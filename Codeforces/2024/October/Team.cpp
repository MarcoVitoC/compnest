#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    if ((n > m && n != m + 1) || (n < m && m > 2 * n + 2)) {
        cout << -1 << endl;
        return 0;
    }

    if (n > m) {
        for (int i=0; i<n+m; i++) {
            cout << ((i % 2 == 0) ? 0 : 1);
        }
    } else {
        string s = "";
        for (int i=0; i<n*2; i++) {
            s += ((i % 2 == 0) ? '1' : '0');
        }

        m -= n;
        for (char c: s) {
            if (m > 0 && c == '1') {
                cout << '1';
                m--;
            }
            cout << c;
        }

        while (m--) {
            cout << '1';
        }
    }

    return 0;
}
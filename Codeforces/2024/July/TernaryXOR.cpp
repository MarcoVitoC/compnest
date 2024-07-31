#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    string x;
    cin >> x;

    bool isMetOne = false;
    string a = "", b = "";
    for (int i=0; i<n; i++) {
        if (isMetOne) {
            a += '0';
            b += x[i];
            continue;
        }
        
        if (x[i] == '0') {
            a += '0';
            b += '0';
        } else if (x[i] == '2') {
            a += '1';
            b += '1';
        } else {
            a += '1';
            b += '0';
            isMetOne = true;
        }
    }

    cout << a << endl;
    cout << b << endl;
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
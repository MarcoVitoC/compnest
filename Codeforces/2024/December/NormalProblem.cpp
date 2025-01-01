#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    string a;
    cin >> a;

    int len = a.length();
    for (int i=len-1; i>=0; i--) {
        if (a[i] == 'p') cout << 'q';
        else if (a[i] == 'q') cout << 'p';
        else cout << a[i];
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
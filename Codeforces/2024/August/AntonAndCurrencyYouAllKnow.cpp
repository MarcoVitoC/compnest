#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    string n;
    cin >> n;

    int len = n.length(), k = -1;
    for (int i=0; i<len; i++) {
        int currDigit = n[i] - '0', lastDigit = n[len - 1] - '0';
        if (currDigit % 2 == 0) {
            k = i;
            if (currDigit < lastDigit) break;
        }
    }

    if (k == -1) {
        cout << -1 << endl;
        return;
    }

    swap(n[k], n[len - 1]);
    cout << n << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
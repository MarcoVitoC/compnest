#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MAXR = 2e5 + 7;

vector<int> ps(MAXR), steps(MAXR);

void solve() {
    int l, r;
    cin >> l >> r;

    cout << steps[l] + ps[r] - ps[l - 1] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    ps[0] = 0;
    for (int i=1; i<=MAXR; i++) {
        int cnt = 0, k = i;
        while (k > 0) {
            k /= 3;
            cnt++;
        }

        steps[i] = cnt;
        ps[i] = ps[i - 1] + steps[i];
    }

    while (t--) {
        solve();
    }

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> a(N), b(N);
    for (int &ai: a) cin >> ai;

    int k = 0, ans = 1;
    while (a[k] != 2) {
        if (b[k] == 1) {
            cout << -1 << endl;
            return;
        }
        b[k] = 1;
        k = a[k] - 1;
        ans++;
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
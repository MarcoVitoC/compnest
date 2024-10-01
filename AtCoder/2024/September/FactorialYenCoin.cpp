#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int P;
    cin >> P;

    vector<int> f(11, 1);
    for (int i=2; i<=10; i++) {
        f[i] = f[i - 1] * i;
    }

    int ans = 0;
    for (int i=10; i>=1; i--) {
        while (P >= f[i]) {
            P -= f[i];
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}